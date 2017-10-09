#include <iostream>

using namespace std;

class IntStack{
public:
 int top;
static int SIZE;

  int *stack;
static int MINSIZE ;

public: IntStack()
{
  stack = new int[SIZE];
  int i;
  for(i = 0; i < SIZE; i++)
  {
    stack[i] = 0;
  }
  top = -1;
}

public :IntStack(int size)
{
  stack = new int[size];
  int i ;
  for(i = 0; i < size; i++)
  {
    stack[i] = 0;
  }
  top = -1;
}

const int getTop()
{
  return top;
}

const int setTop(const int top)
{
  return this->top = top;
}

const void clear()
{
  top = -1;
}

const bool isEmpty()
{
  return top < 0;
}

void push(int i)
{
  if(++top >= SIZE)
  {
    expand();
  }
  stack[top] = i;
}

const int pop()
{
  const int r = stack[top--];
  shrink();
  return r;
}

const int get(const int i){
  return stack[i];
}

const void set(const int i, const int val){

  stack[i] = val;
}

const int size(){
  return top + 1;
}

private : const void expand(){
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


private: const void shrink(){
  int l = SIZE;
  if(l <= MINSIZE || top << 2 >= 1){
    return;
  }
  l = 1 + (top << 1);
  if(top < MINSIZE){
    l = MINSIZE;
  }
  int *newstack1 = new int[l];
  for(int i = 0; i < l; i++){
    newstack1[i] = stack[i];
    delete[] stack;
    stack = newstack1;
  }
}
public: void print(){
for(int i=0; i< SIZE; i++){
cout<< stack[i]<< endl;
}
}
};
int IntStack :: SIZE = 16;
int IntStack :: MINSIZE = 1 << 15;

int main(){
IntStack intstack;
return 0;
}
