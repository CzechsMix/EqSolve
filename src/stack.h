#ifndef STACK_H
#define STACK_H

#include <string>

using namespace std;

namespace eqsolve
{
  class node
  {
    public:
      string val;
      node* next;
  };

  class stack
  {
    private:
      node* top;
    public:
      stack();
      ~stack();
      void push(string val);
      string pop();
      string peek();
      bool empty();
  };
}

#endif //STACK_H
