/////////////////////////////////////////////
//astree.h
//Eron Lake
//ejlake@ucsc.edu
//CMPS104A
//defines functions for abstract syntax tree
//////////////////////////////////////////////

#ifndef __ASTREE_H__
#define __ASTREE_H__

#include <string>
#include <vector>
using namespace std;


struct location {
   size_t filenr;
   size_t linenr;
   size_t offset;
};

struct astree {

   // Fields.
   int symbol;               // token code
   location lloc;            // source location
   const string* lexinfo;    // pointer to lexical information
   vector<astree*> children; // children of this n-way node

   // Functions.
   astree (int symbol, const location&, const char* lexinfo);
   ~astree();
   astree* adopt (astree* child1, astree* child2 = nullptr, 
                        astree* child3 = nullptr);
   astree* adopt_sym (astree* child, int symbol);
   //----------------------------------------------------
   //myfunctions
   astree* convert_sym (int symbol_);
   //----------------------------------------------------
   void dump_node (FILE*);
   void dump_tree (FILE*, int depth = 0);
   static void dump (FILE* outfile, astree* tree);
   static void print (FILE* outfile, astree* tree, int depth = 0);
};

void destroy (astree* tree1, astree* tree2 = nullptr, 
                     astree* tree3 = nullptr);

//-------------------------------------------------------
 //myfunctions
astree* new_parseroot();
astree* new_node(astree* node, int symbol);
//-------------------------------------------------------
void errllocprintf (const location&, const char* format, const char*);

#endif

