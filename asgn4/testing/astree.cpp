/////////////////////////////////////////////
//astree.cpp
//Eron Lake
//ejlake@ucsc.edu
//CMPS104A
//declaring functions for abstract syntax tree
//////////////////////////////////////////////

#include <assert.h>
#include <inttypes.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "astree.h"
#include "string_set.h"
#include "lyutils.h"
#include "auxlib.h"
#include "yyparse.h"


astree::astree (int symbol_, const location& lloc_, const char* info,
               attr_bitset attributes_ = 0, size_t block_nr_ = 0, 
               node_symbol* struct_node_ = nullptr) {
   symbol = symbol_;
   lloc = lloc_;
   lexinfo = string_set::intern (info);
   //--------------------
   attributes = attributes_;
   struct_node = struct_node_;
   block_nr = block_nr_;

   // vector defaults to empty -- no children
}

astree::~astree() {
   while (not children.empty()) {
      astree* child = children.back();
      children.pop_back();
      delete child;
   }
   if (yydebug) {
      fprintf (stderr, "Deleting astree (");
      astree::dump (stderr, this);
      fprintf (stderr, ")\n");
   }
}

astree* astree::adopt (astree* child1, astree* child2, 
                           astree* child3) {
   if (child1 != nullptr) children.push_back (child1);
   if (child2 != nullptr) children.push_back (child2);
   if (child3 != nullptr) children.push_back (child3);
   return this;
}

astree* astree::adopt_sym (astree* child, int symbol_) {
   symbol = symbol_;
   return adopt (child);
}

astree* astree::convert_sym (int symbol_) {
   symbol = symbol_;
   return this;
}


void astree::dump_node (FILE* outfile) {
   fprintf (outfile, "%p->{%s %zd.%zd.%zd \"%s\":",
            this, parser::get_tname (symbol),
            lloc.filenr, lloc.linenr, lloc.offset,
            lexinfo->c_str());
   for (size_t child = 0; child < children.size(); ++child) {
      fprintf (outfile, " %p", children.at(child));
   }
}

void astree::dump_tree (FILE* outfile, int depth) {
   fprintf (outfile, "%*s", depth * 3, "");
   dump_node (outfile);
   fprintf (outfile, "\n");
   for (astree* child: children) child->dump_tree (outfile, depth + 1);
   fflush (NULL);
}

void astree::dump (FILE* outfile, astree* tree) {
   if (tree == nullptr) fprintf (outfile, "nullptr\n");
                   else tree->dump_node (outfile);
}

void astree::print (FILE* outfile, astree* tree, int depth) {
   for (int i = 0; i < depth; i++){
      fprintf(outfile,"%*s", i, "|  ");
   }
   fprintf (outfile, "%s \"%s\" %zd.%zd.%zd {%zd} %s\n",
            parser::get_tname (tree->symbol), tree->lexinfo->c_str(),
            tree->lloc.filenr, tree->lloc.linenr, tree->lloc.offset,
            tree->block_nr, atr_to_string(tree->attributes));
   for (astree* child: tree->children) { 
      astree::print (outfile, child, depth + 1);
   }
}

void destroy (astree* tree1, astree* tree2, astree* tree3) {
   if (tree1 != nullptr) delete tree1;
   if (tree2 != nullptr) delete tree2;
   if (tree3 != nullptr) delete tree3;
}

void errllocprintf (const location& lloc, const char* format,
                    const char* arg) {
   static char buffer[0x1000];
   assert (sizeof buffer > strlen (format) + strlen (arg));
   snprintf (buffer, sizeof buffer, format, arg);
   errprintf ("%s:%zd.%zd: %s", 
              lexer::filename (lloc.filenr), lloc.linenr, lloc.offset,
              buffer);
}

//------------------------------------------------------------------
//creates empty tree node for end of file
astree* new_parseroot(){
   astree* node = new astree (TOK_ROOT,{0, 0, 0}, "",0,0,nullptr);
   return node;
}

//------------------------------------------------------------------
//used to synthisize TOK_FUNCTION and TOK_PROTOTYPE 
astree* new_node(astree* node, int symbol){
   astree* out_node = new astree (symbol,node->lloc, "",0,0,nullptr);
   return out_node;
}

