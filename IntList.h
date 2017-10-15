#ifndef _INT_LIST_H_
#define _INT_LIST_H_ 

class IntList 
{
  public: 
    virtual String toString();

  private: 
    const int head;
    const IntList tail;

    IntList(const int head); 
    IntList(const int X, const IntList Xs); 
  
    const boolean isEmpty(const IntList Xs); 
    const int head(const IntList Xs); 
    const IntList empty = null;
    const IntList tail(const IntList Xs); 
    const IntList cons(const int X, const IntList Xs); 
    const IntList app(const int[] xs, const IntList Ys); 
    const IntStack toInts(IntList Xs); 
    const int len(const IntList Xs);
};

#endif
