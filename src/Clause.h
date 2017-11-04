#ifndef _CLAUSE_H_
#define _CLAUSE_H_

#include<iostream>
using namespace std;

class Clause
{
public:
  
  int len;
  int* hgs;
  int base;
  int neck;
  int* xs;
  
  Clause(const int len, int* hgs,const int base, const int neck, int* xs);
};

#endif