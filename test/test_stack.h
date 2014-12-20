#ifndef TEST_STACK_H
#define TEST_STACK_H

#include <string>
#include <iostream>

#include "../src/stack.h"
#include "test_helper.h"

using namespace std;

namespace eqsolve
{
  void test_stack()
  {
		cout << "Testing stack:" << endl;

    stack* s = new stack();
    s->push("5");
    s->push("2");

    string a = s->pop();
    string b = s->peek();
    string c = s->pop();

    assertTrue("2 should be popped", a == "2");
    assertTrue("5 should be peeked", b == "5");
    assertTrue("5 should be popped", c == "5");

    s->push("2.4");
    s->push("5.2");
    s->push("+");

    while(!s->empty()) s->pop();

		assertTrue("s should be empty", s->empty());

    cout << endl;

    delete s;
  }
}

#endif //TEST_STACK_H
