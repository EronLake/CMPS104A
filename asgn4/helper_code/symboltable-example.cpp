/**
 * Example for using bitsets, symbol tables, etc.
 *
 * Compile with "g++ -std=c++11"
 */

// Import the relevant STL classes
#include <bitset>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

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
};

int main(int argc, char** argv) {
  symbol_table global;
  string* keyA = new string("Key A");
  symbol* a = new symbol();
  // You can turn single attributes flags on by assigning true (1) to the bit
  a->attributes[ATTR_void] = true;
  // You can use the symbol table (unordered_map) like an associative array
  global[keyA] = a;
  // Accessing symbols in the symbol table and checking attributes...
  if (global[keyA]->attributes[ATTR_void]) {
    cout << "Symbol has 'void' attribute" << endl;
  }
}
