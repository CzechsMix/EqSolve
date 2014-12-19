#ifndef POSTFIX_H
#define POSTFIX_H

#include <string>

#include "stack.h"

namespace eqsolve
{

  double parse_double(string s);

  double solve_postfix(stack* postfix);

}


#endif //POSTFIX_H
