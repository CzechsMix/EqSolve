#ifndef EX_TREE_H
#define EX_TREE_H

#include <string>

#include "stack.h"

using namespace std;

namespace eqsolve
{

  class extree
  {
    private:
      string val;
      extree* left;
      extree* right;

    public:
      extree();
      ~extree();
      stack* get_postfix();

      void set_val(string v);
      string get_val();
      void set_left(extree* l);
      void set_left(string lv);
      extree* get_left();
      void set_right(extree* r);
      void set_right(string rv);
      extree* get_right();

  };

}

#endif //EX_TREE_H
