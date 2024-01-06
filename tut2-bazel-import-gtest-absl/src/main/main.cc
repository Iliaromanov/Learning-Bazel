#include "src/lib/cpplib.h"
#include <iostream>
#include <string>


/*
To build+run this using bazel based on the src/main/BUILD do:

bazel run src/main:main
*/


int main() {
  CPPLib util;

  std::cout << util.PrintHelloWorld() << std::endl;

  return 0;
}
