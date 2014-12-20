#include <iostream>
#include <string>
#include <stdlib.h> //system()

#include "test_stack.h"
#include "test_postfix.h"
#include "test_extree.h"

using namespace std;
using namespace eqsolve;

int main()
{
  system("clear");
  cout << "Testing EquSolver" << endl;
  cout << "===========================================" << endl;

  test_stack();
  test_postfix();
  test_extree();

  cout << "===========================================" << endl;
  cout << "Testing Completed" << endl;

  return 0;
}

