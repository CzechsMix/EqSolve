#ifndef TEST_EXTREE_H
#define TEST_EXTREE_H

#include <string>
#include <iostream>

#include "../src/stack.h"
#include "../src/extree.h"

#include "test_helper.h"

using namespace std;

namespace eqsolve
{
  void test_extree()
  {
    cout << "Testing ExTree:" << endl;

    extree* l = new extree();
    
    l->set_val("+");
    l->set_left("1");
    l->set_right("2");

    extree* r = new extree();
    r->set_val("3");
    
    extree* t = new extree();
    t->set_val("*");
    t->set_left(l);
    t->set_right(r);

    stack* postfix = t->get_postfix();

    double res = solve_postfix(postfix);

    assertEquals("Tree should resolve to 9", res, 9.0);

    //also cleans up r and l;
    delete t;
    
    delete postfix;

    cout << endl;
  }
}

#endif //TEST_EXTREE_H
