#ifndef POSTFIX_CPP
#define POSTFIX_CPP

#include <string>
#include <sstream>

using namespace std;

namespace eqsolve
{

  double parse_double(string s)
  {
    istringstream i(s);
    double x;
    if(!(i >> x))
      return 0;
    return x;
  }


  double solve_postfix(stack* postfix)
  {
    //TODO: finish me
    return 0;
  }
}

#endif
