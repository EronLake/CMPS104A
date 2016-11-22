/////////////////////////////////////////////
//symtable.cpp
//Eron Lake
//ejlake@ucsc.edu
//CMPS104A
//defines functions for abstract syntax tree
//////////////////////////////////////////////
#include "symtable.h"
#include "yyparse.h"
#include "lyutils.h"

#include <string.h>
/*
attr_bitset attributes;
  symbol_table* fields;
  location lloc;
  size_t block_nr;
  vector<symbol*>* parameters;
*/

symbol_table symbol::struct_table;
vector<symbol_table> symbol::sym_table;
vector<symbol_table> symbol::sym_stack;

char* atr_to_string (attr_bitset atr) {
    string str = "";

    if (atr.test (ATTR_struct))      { str += "struct ";    }

    if (atr.test (ATTR_void))        { str += "void ";      }
    //if (this->attributes.test (ATTR_bool)) { str += "bool ";    }
   // if (this->attributes.test (ATTR_char)) { str += "char ";    }
    if (atr.test (ATTR_int))         { str += "int ";       }
    if (atr.test (ATTR_null))        { str += "null ";      }
    if (atr.test (ATTR_string))      { str += "string ";    }
    
    if (atr.test (ATTR_array))       { str += "array ";     }
    if (atr.test (ATTR_function))    { str += "function ";  }
    if (atr.test (ATTR_variable))    { str += "variable ";  }
    if (atr.test (ATTR_typeid))      { str += "typeid ";    }  
    if (atr.test (ATTR_param))       { str += "param ";     }
    if (atr.test (ATTR_lval))        { str += "lval ";      } 
    if (atr.test (ATTR_const))       { str += "const ";     } 
    if (atr.test (ATTR_vreg))        { str += "vreg ";      }
    if (atr.test (ATTR_vaddr))       { str += "vaddr ";     } 

    return strdup(str.c_str());
}

void add_symtable(){
   symbol_table new_table;
   symbol::sym_table.push_back(new_table);
}


symbol* create_symbol (astree* node) {
    symbol* new_symbol = new symbol();
    new_symbol->attributes = node->attributes;
    new_symbol->fields = nullptr;
    new_symbol->lloc = node->lloc;
    new_symbol->block_nr = node->block_nr;
    new_symbol->parameters = nullptr;
    return new_symbol;
}



void insert_symbol(symbol_table* table, astree* node){
   const string* key = node->lexinfo;
   symbol* new_symbol = create_symbol(node);
  // You can turn single attributes flags on by assigning 
  // true (1) to the bit
  // You can use the symbol table (unordered_map) like an 
  //associative array
  (*table)[key] = new_symbol;
  // Accessing symbols in the symbol table and checking 
  //attributes...
//  if ((*table)[key]->attributes[ATTR_int]) {
 //   cout << "Symbol has 'int' attribute" << endl;
//  }
}


void insert_param(vector<symbol*>* vector, astree* node){
   //const string* key = node->lexinfo;
   symbol* new_symbol = create_symbol(node);
  // You can turn single attributes flags on by assigning 
  // true (1) to the bit
  // You can use the symbol table (unordered_map) like an 
  //associative array
  (*vector).push_back(new_symbol);
  // Accessing symbols in the symbol table and checking 
  //attributes...
}




void insert_struct_table(string* key){
   //create new empty symbol
   symbol* new_symbol = new symbol();
   //set block number to zero so it is global
   new_symbol->block_nr = 0;

  new_symbol->attributes[ATTR_struct] = true;
  new_symbol->attributes[ATTR_typeid] = true;

  //sets up the field table for insert
 // symbol_table* field_table = new symbol_table;

  new_symbol->fields = nullptr;
  
  // You can use the symbol table (unordered_map) like
  // an associative array
  symbol::struct_table[key] = new_symbol;
  // Accessing symbols in the symbol table and checking attributes...
 // if (symbol::struct_table[key]->attributes[ATTR_struct]) {
 //   cout << "Symbol has struct attribute" << endl;
 // }
}



void print_node(FILE* outfile,symbol_table table, const string* key){
  // for (auto itr = symbol::struct_table.begin();
   //      itr != symbol::struct_table.end(); ++itr)
   // std::cout << itr.value() << std::endl;
   symbol* node = table[key];
   

   fprintf (outfile,"%s (%zd.%zd.%zd) {%zd} %s\n",
            key->c_str(),node->lloc.filenr,node->lloc.linenr, 
            node->lloc.offset,node->block_nr,
            atr_to_string(node->attributes));
  // printf (""symbol::struct_table[key]->atr_to_string());
   //printf("%zd",symbol::struct_table[key]->lloc.filenr);
}

void print__table(string* key){
  // for (auto itr = symbol::struct_table.begin();
   //      itr != symbol::struct_table.end(); ++itr)
   // std::cout << itr.value() << std::endl;
   symbol* node = symbol::struct_table[key];
   

  // printf ("--------------------------------------\n");
  // printf ("symbol\n");
   printf ("%s (%zd.%zd.%zd) {%zd} %s\n",
            key->c_str(),node->lloc.filenr,node->lloc.linenr, 
            node->lloc.offset,node->block_nr,
            atr_to_string(node->attributes));
  // printf (""symbol::struct_table[key]->atr_to_string());
   //printf("%zd",symbol::struct_table[key]->lloc.filenr);
  // printf ("--------------------------------------\n");
}

symbol* find_symbol(symbol_table* table, const string* key){
  // printf("_________________________________________\n");
   if (table->count (key) > 0){
      return (*table)[key];
   }else{
      return nullptr;
   }
}

//void find_symbol(symbol sym);
