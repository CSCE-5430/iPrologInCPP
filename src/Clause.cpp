#include<iostream>
using namespace std;
#include "Clause.h"

Clause::Clause(const int len, int* hgs,const int base, const int neck, int* xs)
{
  this->hgs = hgs;
  this->base = base;
  this->len = len;
  this->neck = neck;
  this->xs = xs;
}

