#ifndef TEST_STACK_H
#define TEST_STACK_H

#include "../src/stack.h"

using namespace std;

namespace eqsolve
{
  void test_stack()
  {
    stack* s = new stack();
    s->push("5");
    s->push("2");

    string a = s->pop();
    string b = s->peek();
    string c = s->pop();

    cout << "Should print:" << endl;
    cout << "2 5 5" << endl;
    cout << "Does print:" << endl;
    cout << a << " " << b << " " << c << endl;

    s->push("2.4");
    s->push("5.2");
    s->push("+");

    cout << "Should print: " << endl;
    cout << "+ 5.2 2.4 " << endl;
    cout << "Does print: " << endl;

    while(!s->empty())
    {
      cout << s->pop() << " ";
    }

    cout << endl;

    delete s;
  }
}

#endif //TEST_STACK_H
