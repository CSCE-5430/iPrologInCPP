#include <iostream>
#include "IntStack.h"

using namespace std;

static int SIZE;
static int MINSIZE;

IntStack:: IntStack()
{
  stack = new int[SIZE];
  int i;
  for(i = 0; i < SIZE; i++)
  {
    stack[i] = 0;
  }
  top = -1;
}

IntStack::IntStack(int size)
{
  stack = new int[size];
  int i ;
  for(i = 0; i < size; i++)
  {
    stack[i] = 0;
  }
  top = -1;
}

const int IntStack::getTop()
{
  return top;
}

const int IntStack::setTop(const int top)
{
  return this->top = top;
}

const void IntStack::clear()
{
  top = -1;
}

const bool IntStack::isEmpty()
{
  return top < 0;
}

void IntStack::push(int i)
{
  if(++top >= SIZE)
  {
    expand();
  }
  stack[top] = i;
}

const int IntStack::pop()
{
  const int r = stack[top--];
  shrink();
  return r;
}

const int IntStack::get(const int i)
{
  return stack[i];
}

const void IntStack::set(const int i, const int val)
{
  stack[i] = val;
}

const int IntStack::size()
{
  return top + 1;
}

const void IntStack::expand()
{
  int l = SIZE;
  SIZE = SIZE <<1;
  int *newstack = new int[SIZE];
  for(int i = 0; i < l; i++)
  {
    newstack[i] = stack[i];
    cout<< newstack[i]<< endl;
  }
  delete[] stack;
  stack = newstack;
}

const void IntStack::shrink()
{
  int l = SIZE;
  if(l <= MINSIZE || top << 2 >= 1)
  {
    return;
  }
  l = 1 + (top << 1);
  if(top < MINSIZE)
  {
    l = MINSIZE;
  }
  int *newstack1 = new int[l];
  for(int i = 0; i < l; i++)
  {
    newstack1[i] = stack[i];
    delete[] stack;
    stack = newstack1;
  }
}
  
void IntStack::print()
{
  for(int i=0; i< SIZE; i++)
  {
    cout<< stack[i]<< endl;
  }
}
