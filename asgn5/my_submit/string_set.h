/////////////////////////////////////////////
//string_set.h
//Eron Lake
//ejlake@ucsc.edu
//CMPS104A
//file initializing the string_set variables and functions
//////////////////////////////////////////////

#ifndef __STRING_SET__
#define __STRING_SET__

#include <string>
#include <unordered_set>
using namespace std;

#include <stdio.h>

struct string_set {
   string_set();
   static unordered_set<string> set;
   static const string* intern (const char*);
   static void dump (FILE*);
};

#endif

