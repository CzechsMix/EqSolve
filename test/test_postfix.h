#ifndef TEST_POSTFIX_H
#define TEST_POSTFIX_H

#include <string>
#include <iostream>

#include "../src/stack.h"
#include "../src/postfix.h"
#include "test_helper.h"

using namespace std;

namespace eqsolve
{
	void test_postfix()
	{
		cout << "Testing Postfix:" << endl;

		stack* postfix = new stack();

		postfix->push("+");
		postfix->push("3");
		postfix->push("2");

		assertEquals("Equation should return 5", solve_postfix(postfix), 5.0);

		delete postfix;

		cout << endl;
	}
}

#endif //TEST_POSTFIX_H
