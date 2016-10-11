/////////////////////////////////////////////
//main.cpp
//Eron Lake
//ejlake@ucsc.edu
//CMPS104A
//main program for asgn1
//////////////////////////////////////////////

#include <string>
using namespace std;

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "string_set.h"
#include "auxlib.h"
//--------------------------
//import for cppstrtok.cpp

#include <errno.h>
#include <libgen.h>

#include <wait.h>
#include <unistd.h>


const string CPP = "/usr/bin/cpp";
constexpr size_t LINESIZE = 1024;

// Chomp the last character from a buffer if it is delim.
void chomp (char* string, char delim) {
   size_t len = strlen (string);
   if (len == 0) return;
   char* nlpos = string + len - 1;
   if (*nlpos == delim) *nlpos = '\0';
}

// Run cpp against the lines of the file.
void cpplines (FILE* pipe, char* filename) {
   int linenr = 1;
   char inputname[LINESIZE];
   strcpy (inputname, filename);
   for (;;) {
      char buffer[LINESIZE];
      char* fgets_rc = fgets (buffer, LINESIZE, pipe);
      if (fgets_rc == NULL) break;
      chomp (buffer, '\n');
      char* savepos = NULL;
      char* bufptr = buffer;
      for (int tokenct = 1;; ++tokenct) {
         char* token = strtok_r (bufptr, " \t\n", &savepos);
         bufptr = NULL;
         if (token == NULL) break;
         //adding the tokens to the hashtable
         string_set::intern (token);
         //----------------------------------
      }
      ++linenr;
   }
}

int main (int argc, char** argv) {
   //set the execname to the name of the executable "oc"
   const char* execname = basename (argv[0]);
   //sets execname for auxlib file
   set_execname (argv[0]);
   //set exit status to EXIT_SUCCESS by defualt
   int exit_status = EXIT_SUCCESS;

   //   Handles reads in argv to handle any arguments
   //convert to scan_opts when possible

   opterr = 0;
   for(;;) {
        int opt = getopt (argc, argv, "ly@:D:");
      if (opt == EOF) break;
         switch (opt) {
            //need to fix stall problem
         case '@': set_debugflags(optarg);  break;
         case 'D':          break; // add it the executable string 
         case 'l':           break;
         case 'y':           break;
         default:  errprintf ("bad option (%c)\n", optopt); break;
      }
   }
   if (optind > argc) {
      errprintf ("Usage: %s [-ly] [filename]\n",
                execname);
        exit (exit_status);
   }
   const char* filename = optind == argc ? "-" :argv[optind];
   
   /*   functionality from cppstrtok.cpp
      reads input through preproccessor
   */
   //-----------------------------------------------------
   
   //for loop allows to preprocessor to read in multiple files
   //for (int argi = 1; argi < argc; ++argi) {
      string command = CPP + " " + filename;
      FILE* pipe = popen (command.c_str(), "r");
      if (pipe == NULL) {
         exit_status = EXIT_FAILURE;
         fprintf (stderr, "%s: %s: %s\n",
                  execname, command.c_str(), strerror (errno));
      }else {
         //runs the preprocessor on the designated file
         cpplines (pipe, (char*)filename);
         int pclose_rc = pclose (pipe);
         eprint_status (command.c_str(), pclose_rc);
         if (pclose_rc != 0) exit_status = EXIT_FAILURE;
      }
   /*   this code added to check if there was an error,
      otherwise proceed with string_set function
   */
   if(exit_status == EXIT_FAILURE){
      return exit_status;
   }
     //add separtion from the two sets of input
   //-----------------------------------------------------
   //creates the output file name with the ".str" extension
   const char* output_name =  strtok ((char*)filename,".");
   const char* extention = ".str";
   strcat ((char*)output_name,extention);

   //dumps the output to the file output.str
   FILE* output_file = fopen (output_name, "w");
   if(output_file == NULL){perror("Error opening file");}
   string_set::dump (output_file);
   fclose(output_file);

   return EXIT_SUCCESS;
}

