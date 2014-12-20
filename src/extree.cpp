#ifndef EX_TREE_CPP
#define EX_TREE_CPP

#include <string>

#include "stack.h"
#include "extree.h"

using namespace std;

namespace eqsolve
{

  void clean(extree* ptr)
  {
    if(ptr) delete ptr;
  }

  extree::extree()
  {
    left = NULL;
    right = NULL;
  }

  extree::~extree()
  {
    if(left) delete left;
    if(right) delete right;
  }

  void traversePRL(stack* s, extree* tree)
  {
    if(tree)
    {
      s->push(tree->get_val());
      traversePRL(s, tree->get_right());
      traversePRL(s, tree->get_left());
    }
  }

  stack* extree::get_postfix()
  {
    stack* s = new stack();
    traversePRL(s, this);
    return s;
  }

  void extree::set_val(string v)
  {
    val = v;
  }

  string extree::get_val()
  {
    return val;
  }

  void extree::set_left(extree* l)
  {
    clean(left);

    left = l; 
  }

  void extree::set_left(string lv)
  {
    clean(left);

    left = new extree();
    left->val = lv;
  }

  extree* extree::get_left()
  {
    return left;
  }

  void extree::set_right(extree* r)
  {
    clean(right);

    right = r;
  }

  void extree::set_right(string rv)
  {
    clean(right);

    right = new extree();
    right->val = rv;
  }

  extree* extree::get_right()
  {
    return right;
  }

}

#endif //EX_TREE_CPP
