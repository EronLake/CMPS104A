/////////////////////////////////////////////
//symhelper.h
//Eron Lake
//ejlake@ucsc.edu
//CMPS104A
//defines functions for abstract syntax tree
//////////////////////////////////////////////

#ifndef __SYMHELPER_H__
#define __SYMHELPER_H__

// Import the relevant STL classes
#include <bitset>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

//#include "symtable.h"
#include "astree.h"  

void build_symtable (FILE* outfile, astree* tree, int depth);
void traverse (FILE* outfile, astree* tree, int depth);
void print_symtable (FILE* outfile, astree* tree, int block_nr);

#endif
