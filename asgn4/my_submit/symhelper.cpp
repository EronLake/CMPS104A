/////////////////////////////////////////////
//symhelper.cpp
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

int stack_ctr = 0;

//------------------------------------------------------------------
void build_symtable (FILE* outfile, astree* tree, int block_nr) {
   for (int i = 0; i < block_nr; i++){
     // fprintf(outfile,"%*s", i, "|  ");
   }
   
   switch(tree->symbol) {
      ///////////////////////////////////////////////////////////////
      case TOK_ROOT :
      ///////////////////////////////////////////////////////////////
      {
        // printf ("--------------------------------\n");
         //printf ("case TOK_ROOT\n");
        // printf ("--------------------------------\n");
         for (astree* child: tree->children) {
            build_symtable (outfile, child, (size_t)block_nr);
         }
         tree->block_nr = (size_t)block_nr;
         break;
      }
      ///////////////////////////////////////////////////////////////
      case TOK_STRUCT :
      ///////////////////////////////////////////////////////////////
      /*
         {
      //   printf ("--------------------------------\n");
      //   printf ("case TOK_STRUCT\n");
         //get key
         string* key = new string(std::string (
                  tree->children[0]->lexinfo->c_str()));

         //check of the struct already exists

         //add struct to struct table 
         insert_struct_table(key);
         //print_node(symbol::struct_table, key);

         //create the symbol_table pointer for fields
         symbol_table* field_table = new unordered_map<const string*,
                symbol*>; 

         //gets field list for insert
         astree* field_list_head = tree->children[1]->children[0];
         //handles the first field
         //insert into given table
         insert_symbol (field_table, field_list_head);

         for (auto itr = field_list_head->children.begin();
               itr != field_list_head->children.end(); itr++) {
               insert_symbol (field_table, *itr);
       //        print_node(*field_table,(*itr)->lexinfo);

         }

         symbol::struct_table[key]->fields = field_table;

         tree->attributes[ATTR_struct] = true;
         tree->attributes[ATTR_typeid] = true;         
         tree->block_nr = 0;
         tree->struct_node = symbol::struct_table[key];

         //printf ("--------------------------------\n");

         
         }
         */
         break;
      ///////////////////////////////////////////////////////////////
      case TOK_TYPEID :
      ///////////////////////////////////////////////////////////////
      //   printf ("--------------------------------\n");
      //   printf ("case TOK_TYPEID\n");
      //   printf ("--------------------------------\n");
         break;
      //----------------------------------------------
      //NOT IMPLEMENTED 
      ///////////////////////////////////////////////////////////////
      case TOK_DECLID :
      ///////////////////////////////////////////////////////////////
      //   printf ("--------------------------------\n");
     //    printf ("case TOK_DECLID\n");
     //    printf ("--------------------------------\n");
         break;
      ///////////////////////////////////////////////////////////////
      case TOK_STRING :
      ///////////////////////////////////////////////////////////////
     //    printf ("--------------------------------\n");
      //   printf ("case TOK_DECLID\n");
     //    printf ("--------------------------------\n");
         break;
      ///////////////////////////////////////////////////////////////
      case TOK_INT :
      ///////////////////////////////////////////////////////////////
     //    printf ("--------------------------------\n");
     //    printf ("case TOK_INT\n");
        // printf("%zd",(size_t)block_nr);

         if (find_symbol( &symbol::sym_table[(size_t)block_nr],
                  tree->lexinfo) == nullptr){

            tree->block_nr = (size_t)block_nr;
            insert_symbol (&symbol::sym_table[(size_t)block_nr], 
                  tree);
            
          //  printf("%s",tree->children[0]->lexinfo->c_str());

         }
         
         
        // printf("%zd",tree->block_nr);
     //    printf ("--------------------------------\n");
         break;
      ///////////////////////////////////////////////////////////////
      case TOK_PARAMLIST :
      ///////////////////////////////////////////////////////////////
      {
    //     printf ("--------------------------------\n");
     //    printf ("case TOK_PARAMLIST\n");

            if (find_symbol( &symbol::sym_table[(size_t)block_nr],
                  tree->lexinfo) == nullptr){

               tree->block_nr = (size_t)block_nr;
               insert_symbol (&symbol::sym_table[(size_t)block_nr], 
                     tree);
            }

    //     printf ("--------------------------------\n");
         break;
      }
      ///////////////////////////////////////////////////////////////
      case TOK_PROTOTYPE :
      ///////////////////////////////////////////////////////////////
         {
  //       printf ("--------------------------------\n");
    //     printf ("case TOK_PROTOTYPE\n");
         const string* key = tree->children[0]->children[0]->lexinfo;

         symbol* prototype_sym = create_symbol(tree);

         //gets field list for insert
         if (tree->children[1]->children.size() >= 1){
            //add new symbol table for new block
            add_symtable();
            //create empty vector
            vector<symbol*>* params = new vector<symbol*>;
            
            astree* param_list_head = tree->children[1]->children[0];
            
            insert_param (params, param_list_head);
            stack_ctr += 1;
            //prin
            build_symtable (outfile, param_list_head, stack_ctr);

            for (auto itr = param_list_head->children.begin();
                  itr != param_list_head->children.end(); itr++) {
                  insert_param (params, *itr);
                  build_symtable (outfile, *itr,stack_ctr);
                 // print_node(*params,(*itr)->lexinfo);
            }
            //add peramater to the symbol
            prototype_sym->parameters = params;
         }

         if (find_symbol( &symbol::sym_table[(size_t)block_nr],
                  key) == nullptr){
            //symbol* temp = create_symbol(tree);

            //symbol_entry new_symbol = pair<(tree->lexinfo), &temp>;
            symbol_entry new_sym (key,prototype_sym);

            tree->block_nr = (size_t)block_nr;
            symbol::sym_table[(size_t)block_nr].insert(new_sym);  
         //   print_node(symbol::sym_table[(size_t)block_nr],key);    
               // = prototype_sym;
         }else if (find_symbol( &symbol::sym_table[(size_t)block_nr],
                     key)->parameters != nullptr){
            if (prototype_sym->parameters != nullptr){
               if (find_symbol( &symbol::sym_table[(size_t)block_nr],
                  key)->parameters->size() != 
                  prototype_sym->parameters->size()){
                  perror("Redefinition of Prototype");
               }
               perror("Redefinition of Prototype");
            }
         } 

         for (astree* child: tree->children) {
            build_symtable (outfile, child, (size_t)block_nr);
         }

  // print_node(symbol::sym_table[(size_t)block_nr], tree->lexinfo);

        // &symbol::sym_table[(
         //size_t)block_nr][tree->lexinfo]->parameters = params;       

    //     printf ("--------------------------------\n");
         break;
         }
         //break;
      ///////////////////////////////////////////////////////////////
      default :
         {
         for (astree* child: tree->children) {
            build_symtable (outfile, child, (size_t)block_nr);
         }
         tree->block_nr = (size_t)block_nr;
         break;
        
         }
      }
  // fprintf (outfile, "%s \"%s\" %zd.%zd.%zd\n",
   //         parser::get_tname (tree->symbol), tree->lexinfo->c_str(),
   //         tree->lloc.filenr, tree->lloc.linenr, tree->lloc.offset);
      
   //for (astree* child: tree->children) {
   //   build_symtable (outfile, child, (size_t)block_nr);
  // }
}




//------------------------------------------------------------------
void traverse (FILE* outfile, astree* tree, int block_nr) {
   for (int i = 0; i < block_nr; i++){
    //  fprintf(outfile,"%*s", i, "|  ");
   }

   for (astree* child: tree->children) {
      traverse (outfile, child, block_nr);
   }
   
   switch(tree->symbol) {
      case TOK_ROOT :
      //   printf ("////////////////////////////////\n");
      //   printf ("case TOK_ROOT\n");
      //   printf ("////////////////////////////////\n");
         break;

      case TOK_STRUCT :
      /*
         {
      //   printf ("////////////////////////////////\n");
      //   printf ("case TOK_STRUCT\n");
         //get key
         string* key = new string(std::string (
                  tree->children[0]->lexinfo->c_str()));

         //check of the struct already exists

         //add struct to struct table 
         insert_struct_table(key);
      //   print_node(symbol::struct_table, key);

         //create the symbol_table pointer for fields
         symbol_table* field_table = new unordered_map<const string*,
                symbol*>; 

         //gets field list for insert
         astree* field_list_head = tree->children[1]->children[0];
         //handles the first field
         //insert into given table
         insert_symbol (field_table, field_list_head);

         for (auto itr = field_list_head->children.begin();
               itr != field_list_head->children.end(); itr++) {
               insert_symbol (field_table, *itr);
      //         print_node(*field_table,(*itr)->lexinfo);

         }

         symbol::struct_table[key]->fields = field_table;

         tree->attributes[ATTR_struct] = true;
         tree->attributes[ATTR_typeid] = true;         
         tree->block_nr = 0;
         tree->struct_node = symbol::struct_table[key];

       //  printf ("////////////////////////////////\n");

         
         }
         */
         break;
      case TOK_TYPEID :
      //   printf ("////////////////////////////////\n");
       //  printf ("case TOK_TYPEID\n");
      //  printf ("////////////////////////////////\n");
         break;
      //----------------------------------------------
      //NOT IMPLEMENTED 
      case TOK_VARDECL :
     //    printf ("////////////////////////////////\n");
      //   printf ("case TOK_VARDECL\n");
      //   printf ("////////////////////////////////\n");
         break;
      case TOK_DECLID :
      //   printf ("////////////////////////////////\n");
     //    printf ("case TOK_DECLID\n");
     //    printf ("////////////////////////////////\n");
         break;
      case TOK_INT :
         {      
      //   printf ("////////////////////////////////\n");
      //   printf ("case TOK_INT\n");
         const string* key = tree->lexinfo;

        /* if (find_symbol( &symbol::sym_table[(size_t)block_nr],
                  tree->lexinfo) == nullptr){

            insert_symbol (&symbol::sym_table[(size_t)block_nr], 
                  tree);
         }*/
         tree->attributes[ATTR_int] = true;
         tree->attributes[ATTR_variable] = true;
         tree->attributes[ATTR_lval] = true;
         tree->struct_node = symbol::sym_table[tree->block_nr][key];

        // printf("%i",(int)symbol::sym_table.size());

         symbol::sym_table[tree->block_nr][key]->attributes = 
               tree->attributes;

        //symbol::sym_table[tree->block_nr][key]->attributes = 
          //     tree->attributes;


      //   printf ("////////////////////////////////\n");
         }
         break;
      case TOK_INTCON :
      //   printf ("////////////////////////////////\n");
      //   printf ("case TOK_INTCON\n");
       //  printf ("////////////////////////////////\n");
         break;
      ///////////////////////////////////////////////////////////////
      case TOK_PROTOTYPE :
      ///////////////////////////////////////////////////////////////
         {
      //   printf ("--------------------------------\n");
       //  printf ("case TOK_PROTOTYPE\n");
         const string* key = tree->children[0]->children[0]->lexinfo;

         tree->attributes[ATTR_function] = true;
         tree->struct_node = symbol::sym_table[tree->block_nr][key];

         symbol::sym_table[tree->block_nr][key]->attributes = 
               tree->attributes;

        // &symbol::sym_table[(
         //size_t)block_nr][tree->lexinfo]->parameters = params;       

       //  printf ("--------------------------------\n");
         break;
         }
      //default :
   }
  // fprintf (outfile, "%s \"%s\" %zd.%zd.%zd\n",
   //         parser::get_tname (tree->symbol), tree->lexinfo->c_str(),
   //         tree->lloc.filenr, tree->lloc.linenr, tree->lloc.offset);
      
}



//------------------------------------------------------------------
void print_symtable (FILE* outfile, astree* tree, int block_nr) {
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
      //----------------------------------------------
      //NOT IMPLEMENTED 
      ///////////////////////////////////////////////////////////////
      case TOK_VARDECL :
      ///////////////////////////////////////////////////////////////
         break;
      ///////////////////////////////////////////////////////////////
      case TOK_DECLID :
      ///////////////////////////////////////////////////////////////

         break;
      ///////////////////////////////////////////////////////////////
      case TOK_INT :
      ///////////////////////////////////////////////////////////////
      {
         const string* key = tree->lexinfo;

         print_node(outfile,symbol::sym_table[tree->block_nr],key);
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

         print_node(outfile,symbol::sym_table[(size_t)block_nr],
                  key);    

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
      print_symtable (outfile, child, (size_t)block_nr);
   }
}

