#include "IntList.h"

IntList :: IntList(const int head) 
{
  this.head = head;
  tail = null;
}

IntList :: IntList(const int X, const IntList Xs) 
{
  head = X;
  tail = Xs;
}

const boolean IntList :: isEmpty(const IntList Xs) 
{
  return null == Xs;
}

const int IntList :: head(const IntList Xs) 
{
  return Xs.head;
}

const IntList empty = null;

const IntList IntList :: tail(const IntList Xs) 
{
  return Xs.tail;
}

const IntList IntList :: cons(const int X, const IntList Xs) 
{
  return new IntList(X, Xs);
}

const IntList IntList :: app(const int[] xs, const IntList Ys) 
{
  IntList Zs = Ys;
  for (int i = xs.length - 1; i >= 0; i--) 
  {
    Zs = cons(xs[i], Zs);
  }
  return Zs;
}

const IntStack IntList :: toInts(IntList Xs) 
{
  const IntStack is = new IntStack();
  while (!isEmpty(Xs)) 
  {
    is.push(head(Xs));
    Xs = tail(Xs);
  }
  return is;
}

const int IntList :: len(const IntList Xs) 
{
  return toInts(Xs).size();
}

virtual String IntList :: toString() 
{
  return toInts(this).toString();
}

