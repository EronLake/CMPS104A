/////////////////////////////////////////////
//oilhelper.cpp
//Eron Lake
//ejlake@ucsc.edu
//CMPS104A
//defines functions for abstract syntax tree
//////////////////////////////////////////////

#include "astree.h"
#include "string_set.h"
#include "lyutils.h"
#include "auxlib.h"
#include "yyparse.h"
#include "symtable.h"
#include "symhelper.h"
#include "oilhelper.h"


//------------------------------------------------------------------
void print_oil (FILE* outfile, astree* tree, int block_nr) {
   if (tree->block_nr > 0){
      fprintf(outfile,"  ");
   }
   
   switch(tree->symbol) {
      ///////////////////////////////////////////////////////////////
      case TOK_ROOT :
      ///////////////////////////////////////////////////////////////


      ///////////////////////////////////////////////////////////////
      case TOK_STRUCT :
      ///////////////////////////////////////////////////////////////
         {
      //print_node(symbol::struct_table, tree->children[0]->lexinfo);
         break;
         }
      ///////////////////////////////////////////////////////////////
      case TOK_TYPEID :
      ///////////////////////////////////////////////////////////////

         break;
      ///////////////////////////////////////////////////////////////
      case TOK_ARRAY :
      ///////////////////////////////////////////////////////////////
      {

         const string* key = tree->children[1]->lexinfo;

         if (find_symbol( &symbol::sym_table[(size_t)block_nr],
                  key) != nullptr){
            fprintf(outfile,"array__%s\n",key->c_str());
         }
         break;
      }  
      //----------------------------------------------
      //NOT IMPLEMENTED 
      ///////////////////////////////////////////////////////////////
      case TOK_DECLID :
      ///////////////////////////////////////////////////////////////
         break;
      ///////////////////////////////////////////////////////////////
      case TOK_STRING :
      ///////////////////////////////////////////////////////////////
      {

         if (tree->children.size() >= 1){

            const string* key = tree->children[0]->lexinfo;

            if (find_symbol( &symbol::sym_table[(size_t)block_nr],
                  key) != nullptr){

               fprintf(outfile,"string__%s\n",key->c_str());
            }
         }
         break;
      }
      ///////////////////////////////////////////////////////////////
      case TOK_INT :
      ///////////////////////////////////////////////////////////////
      {
         if (tree->children.size() >= 1){

            const string* key = tree->children[0]->lexinfo;

            if (find_symbol( &symbol::sym_table[(size_t)block_nr],
                  key) != nullptr){

                  fprintf(outfile,"int__%s\n",key->c_str());
            }
         }
         break;
      }
      ///////////////////////////////////////////////////////////////
      case TOK_INTCON :
      ///////////////////////////////////////////////////////////////

         break;
      ///////////////////////////////////////////////////////////////
      case TOK_PROTOTYPE :
      ///////////////////////////////////////////////////////////////
         {
         const string* key = tree->children[0]->children[0]->lexinfo;

         fprintf(outfile,"void__%s\n",key->c_str());  

         //printf ("--------------------------------\n");
         break;
         }
      //default :
   }
  /* fprintf (outfile, "%s \"%s\" %zd.%zd.%zd\n",
            parser::get_tname (tree->symbol), tree->lexinfo->c_str(),
            tree->lloc.filenr, tree->lloc.linenr, tree->lloc.offset);
      */
   for (astree* child: tree->children) {
      print_oil (outfile, child, (size_t)block_nr);
   }
}

