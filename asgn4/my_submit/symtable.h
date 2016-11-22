/////////////////////////////////////////////
//symtable.h
//Eron Lake
//ejlake@ucsc.edu
//CMPS104A
//defines functions for abstract syntax tree
//////////////////////////////////////////////

#ifndef __SYMTABLE_H__
#define __SYMTABLE_H__

// Import the relevant STL classes
#include <bitset>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

//my includes

// Instead of writing "std::string", we can now just write "string"
using namespace std;

// The enum for all the possible flags
//   ATTR_bitset_size is not actually used
//   but its value is equal to the number of attributes
enum { ATTR_void, ATTR_int, ATTR_null, ATTR_string,
       ATTR_struct, ATTR_array, ATTR_function, ATTR_variable,
       ATTR_field, ATTR_typeid, ATTR_param, ATTR_lval, ATTR_const,
       ATTR_vreg, ATTR_vaddr, ATTR_bitset_size };

// Create a shorthand notation for the bitset
using attr_bitset = bitset<ATTR_bitset_size>;

// Forward declaration of the symbol struct
struct symbol;

// Create a shorthand notation for a symbol_table
using symbol_table = unordered_map<const string*, symbol*>;

//pair<const string*,symbol*> symbol_table::value_type;
using symbol_entry = pair<const string*,symbol*>;


// Re-using the location struct from AST nodes

struct location {
   size_t filenr;
   size_t linenr;
   size_t offset;
};

// The actual definition of the symbol struct
struct symbol {
  attr_bitset attributes;
  symbol_table* fields;
  location lloc;
  size_t block_nr;
  vector<symbol*>* parameters;
  
  //variables
  static symbol_table struct_table;
  static vector<symbol_table> sym_table;
  static vector<symbol_table> sym_stack;
};

//functions 
char* atr_to_string(attr_bitset atr);

struct astree;

void insert_symbol(symbol_table* table,astree* node);
void insert_param(vector<symbol*>* vector, astree* node);
symbol* find_symbol(symbol_table* table, const string* key);
void add_symtable();

symbol* create_symbol (astree* node);

void insert_struct_table(string* key);
void print_node(FILE* outfile,symbol_table table, const string* key);

//void build_symtable (FILE* outfile, astree* tree, int depth);

#endif
