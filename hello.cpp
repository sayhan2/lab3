#include <iostream>
#include "myclass.h"

using namespace std;

int main () {
  cout << "Hello ld" << endl;

  MyClass a(5);
  cout << a.getX() << endl;
}
