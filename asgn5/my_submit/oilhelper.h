/////////////////////////////////////////////
//oilhelper.h
//Eron Lake
//ejlake@ucsc.edu
//CMPS104A
//defines functions for abstract syntax tree
//////////////////////////////////////////////

#ifndef __OILHELPER_H__
#define __OILHELPER_H__

// Import the relevant STL classes
#include <bitset>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

//#include "symtable.h"
#include "astree.h"  

void print_oil (FILE* outfile, astree* tree, int block_nr);

#endif
