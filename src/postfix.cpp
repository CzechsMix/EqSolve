#ifndef POSTFIX_CPP
#define POSTFIX_CPP

#include <string>
#include <sstream>

#include "stack.h"

using namespace std;

namespace eqsolve
{

  bool isOp(string s)
  {
    switch(s[0])
    {
      case '+':
      case '-':
      case '/':
      case '*':
        return true;
      default:
        return false;
    }
  }

  double doMath(double a, string op, double b)
  {
    switch(op[0])
    {
      case '+':
        return a+b;
      case '-':
        return a-b;
      case '/':
        return a/b;
      case '*':
        return a*b;
      default:
        return -1;
    }

  }

  double parse_double(string s)
  {
    istringstream i(s);
    double x;
    if(!(i >> x))
      return 0;
    return x;
  }

  string to_string(double d)
  {
    ostringstream o;
    o << d;
    return o.str();
  }


  double solve_postfix(stack* postfix)
  {
    stack* vals = new stack();

    while(!postfix->empty())
    {
      string v = postfix->pop();
      if(isOp(v))
      {
        double b = parse_double(vals->pop());
        double a = parse_double(vals->pop());
        vals->push(to_string(doMath(a, v, b)));
      }
      else
      {
        vals->push(v);
      }
    }

    double res = parse_double(vals->pop());
    delete vals;

    return res;
  }
}

#endif
