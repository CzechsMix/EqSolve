#ifndef TEST_HELPER_H
#define TEST_HELPER_H

#include <iostream>
#include <string>

#define verbose 1

using namespace std;

namespace eqsolve
{

  void assertTrue(string s, bool b)
  {
    cout << (b ? "_" : "-");
		if(!b && verbose)
		{
			cerr << ":" << s << ":";
		}
  }

	void assertEquals(string s, double a, double b)
	{
		cout << (a == b ? "_" : "-");
		if(a != b && verbose)
		{
			cerr << ":" << s << "," << a << "," << b <<":";
		}
	}

}

#endif
