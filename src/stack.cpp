#ifndef STACK_CPP
#define STACK_CPP

#include "stack.h"

namespace eqsolve
{
  stack::stack()
  {
    top = NULL;
  }

  stack::~stack()
  {
    while(!empty()) pop();
  }

  void stack::push(string val)
  {
    node* ntop = new node();
    ntop->val = val;
    ntop->next = this->top;
    this->top = ntop;
  }

  string stack::pop()
  {
    string res;

    if(top)
    {
      res = top->val;
      node* otop = top;
      top = top->next;
      delete otop;
    }

    return res;
  }

  string stack::peek()
  {
    string res;
    
    if(top)
    {
      res = top->val;
    }

    return res;
  }

  bool stack::empty()
  {
    return !top;
  }
}

#endif
