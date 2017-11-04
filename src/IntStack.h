#ifndef _INT_STACK_H
#define _INT_STACK_H
#include <iostream>

using namespace std;

class IntStack
{
public:
  
  int top;
  int *stack;
  
  IntStack();
  IntStack(int size);
  
  const int getTop();
  const int setTop(const int top);
  const void clear();
  const bool isEmpty();
  const int pop();
  const int get(const int i);
  const void set(const int i, const int val);
  const int size();
  
  void push(int i);
  void print();
  
private : 
  const void expand()
  const void shrink()
};

#endif
