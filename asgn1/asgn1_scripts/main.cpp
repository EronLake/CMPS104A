// $Id: main.cpp,v 1.2 2016-08-18 15:13:48-07 - - $

#include <string>
using namespace std;

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "string_set.h"
#include "auxlib.h"

//--------------------------4
//import for cppstrtok.cpp


#include <errno.h>
#include <libgen.h>

#include <wait.h>

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
      printf ("%s:line %d: [%s]\n", filename, linenr, buffer);
      // http://gcc.gnu.org/onlinedocs/cpp/Preprocessor-Output.html
      int sscanf_rc = sscanf (buffer, "# %d \"%[^\"]\"",
                              &linenr, filename);
      if (sscanf_rc == 2) {
         printf ("DIRECTIVE: line %d file \"%s\"\n", linenr, filename);
         continue;
      }
      char* savepos = NULL;
      char* bufptr = buffer;
      for (int tokenct = 1;; ++tokenct) {
         char* token = strtok_r (bufptr, " \t\n", &savepos);
         bufptr = NULL;
         if (token == NULL) break;
         printf ("token %d.%d: [%s]\n",
                 linenr, tokenct, token);
         //adding the tokens to the hashtable
         const string* str = string_set::intern (token);
      	printf ("intern (\"%s\") returned %p->\"%s\"\n",
              token, str, str->c_str());
      	//----------------------------------
      }
      ++linenr;
   }
}

int main (int argc, char** argv) {
	//	Handles reads in argv to handle any arguments



	/*	functionality from cppstrtok.cpp
		reads input through preproccessor
	*/
	//-----------------------------------------------------
	
	const char* execname = basename (argv[0]);
   int exit_status = EXIT_SUCCESS;
   for (int argi = 1; argi < argc; ++argi) {
      char* filename = argv[argi];
      string command = CPP + " " + filename;
      printf ("command=\"%s\"\n", command.c_str());
      FILE* pipe = popen (command.c_str(), "r");
      if (pipe == NULL) {
         exit_status = EXIT_FAILURE;
         fprintf (stderr, "%s: %s: %s\n",
                  execname, command.c_str(), strerror (errno));
      }else {
         cpplines (pipe, filename);
         int pclose_rc = pclose (pipe);
         eprint_status (command.c_str(), pclose_rc);
         if (pclose_rc != 0) exit_status = EXIT_FAILURE;
      }
   }
   /*	this code added to check if there was an error,
		otherwise proceed with string_set function
   */
   if(exit_status == EXIT_FAILURE){
 		return exit_status;
   }
  	//add separtion from the two sets of input
  	printf("--------------------------------\n");
   //-----------------------------------------------------

	//for every argument on the command line
	/*
   for (int i = 1; i < argc; ++i) {
      const string* str = string_set::intern (argv[i]);
      printf ("intern (\"%s\") returned %p->\"%s\"\n",
              argv[i], str, str->c_str());
   }
   */
   //string_set::dump (stdout);
   string_set::dump ("ouput.srt");
   return EXIT_SUCCESS;
}

