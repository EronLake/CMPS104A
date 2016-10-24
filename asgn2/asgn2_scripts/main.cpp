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
#include "astree.h"
#include "lyutils.h"
//--------------------------
//import for cppstrtok.cpp

#include <errno.h>
#include <libgen.h>

#include <wait.h>
#include <unistd.h>


string CPP = "/usr/bin/cpp";
string cpp_command;
constexpr size_t LINESIZE = 1024;
//-----------------------------------
//MY_VARIABLES
//name of file read in, declared in scan_ops
const char* filename;
FILE* tok_output_file;


//////////////////////////////////////////////////////////////////
//MY_FUNCTIONS
//////////////////////////////////////////////////////////////////

const char* mk_outname(const char* filename ,const char* extention){
   //creates the output file name with the given extension
   const char* output_name =  strtok ((char*)filename,".");
   strcat ((char*)output_name,extention);
   return output_name;
}
//----------------------------------------------------------------
   
//----------------------------------------------------------------
void run_preproccessor(){
   //creates the output file name with the ".tok" extension
   const char* tok_output_name = mk_outname(filename ,".tok");
   
   //dumps the output to the file output.tok
   tok_output_file = fopen (tok_output_name, "w");
   if(tok_output_file == NULL){perror("Error opening file");}
   
    //Reads in input from preprocessor
     for(;;){
        int tok = yylex();
        astree::my_print (tok_output_file, yylval);
        if (tok == 0){ break;}
     } 
     
     fclose(tok_output_file);
}

//----------------------------------------------------------------
//////////////////////////////////////////////////////////////////

//----------------------------------------------------------------
// Chomp the last character from a buffer if it is delim.
void chomp (char* string, char delim) {
   size_t len = strlen (string);
   if (len == 0) return;
   char* nlpos = string + len - 1;
   if (*nlpos == delim) *nlpos = '\0';
}

//----------------------------------------------------------------

//----------------------------------------------------------------
void cpp_popen (const char* filename) {
    string command = CPP + " " + filename;
   //reads in input file into yyin for use in later yylex()
   yyin   = popen (command.c_str(), "r");
   if (yyin == NULL) {
      exec::exit_status = EXIT_FAILURE;
      fprintf (stderr, "%s: %s: %s\n",
               exec::execname.c_str(), command.c_str(), strerror (errno));
   }else {
      if (yy_flex_debug) {
         fprintf (stderr, "-- popen (%s), fileno(yyin) = %d\n",
                  cpp_command.c_str(), fileno (yyin));
      }
      //runs the preprocessor on the designated file
     run_preproccessor();
   }
   //lexer::newfilename (cpp_command);
}
//----------------------------------------------------------------

//----------------------------------------------------------------
void cpp_pclose() {
   exec::exit_status = EXIT_SUCCESS;
   int pclose_rc = pclose (yyin);
   eprint_status (cpp_command.c_str(), pclose_rc);
   if (pclose_rc != 0) exec::exit_status = EXIT_FAILURE;
}
//----------------------------------------------------------------

//----------------------------------------------------------------
void scan_opts (int argc, char** argv) {
   yy_flex_debug = 0;
   yydebug = 0;
   lexer::interactive = isatty (fileno (stdin))
                    and isatty (fileno (stdout));
   opterr = 0;
   for(;;) {
      int opt = getopt (argc, argv, "ly@:D:");
      if (opt == EOF) break;
         switch (opt) {
            //need to fix stall problem
         case '@':   set_debugflags(optarg);                         break;
         case 'D':   CPP += " -D " + (string)optarg + " ";      break;
         case 'l':   yy_flex_debug = 1;                                  break;
         case 'y':   yydebug = 1;                                          break;
         default:    errprintf ("bad option (%c)\n", optopt);  break;
      }
   }

   if (optind > argc) {
      errprintf ("Usage: %s [-ly] [filename]\n",
                 exec::execname.c_str());
      exit (exec::exit_status);
   }
   filename = optind == argc ? "-" :argv[optind];
   //cpp_popen (filename);
}
//----------------------------------------------------------------



//////////////////////////////////////////////////////////////////
//----------------------------------------------------------------
//MAIN FUNCTION
//----------------------------------------------------------------
//////////////////////////////////////////////////////////////////

int main (int argc, char** argv) {
   //set the execname to the name of the executable "oc"
   exec::execname = basename (argv[0]);
   //set exit status to EXIT_SUCCESS by defualt
   exec::exit_status = EXIT_SUCCESS;

   //   Handles reads in argv to handle any arguments
   scan_opts (argc, argv);
   //-----------------------------------------------------
   //opens input file
   cpp_popen (filename);
    //closes input file
   cpp_pclose();
   
   /*   
   this code added to check if there was an error,
   otherwise proceed with string_set function
   */
   if(exec::exit_status == EXIT_FAILURE){
   return exec::exit_status;
   }
  //add separtion from the two sets of input
   //-----------------------------------------------------
   //creates the output file name with the ".str" extension
   const char* str_output_name = mk_outname(filename ,".str");

   //dumps the output to the file output.str
   FILE* str_output_file = fopen (str_output_name, "w");
   if(str_output_file == NULL){perror("Error opening file");}
   string_set::dump (str_output_file);
   fclose(str_output_file);
   //---------------------------------------------------------
   
   return EXIT_SUCCESS;
}

