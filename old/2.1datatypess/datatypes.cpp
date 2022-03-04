// Different datatypes, their declaration and memory size in bytes.
// (1 Byte = 8 Bits)

#include <iostream>
using namespace std;

int main()
{
  // Integer declaration and size
  int a; // Declaration
  a = 2; // Initialisation
  cout << "size of int: " << sizeof(a) << endl;

  // Float declaration and size
  float b;
  cout << "size of float: " << sizeof(b) << endl;

  // Character declaration and size
  char c;
  cout << "size of character: " << sizeof(c) << endl;

  // Boolean declaration and size
  bool d;
  cout << "size of boolean: " << sizeof(d) << endl;

  // Short Integer declaration and size
  short int e;
  cout << "size of shortInt: " << sizeof(e) << endl;

  // Long Integer declaration and size
  long int f;
  cout << "size of longInt: " << sizeof(f) << endl;

  // Double declaration and size
  double g;
  cout << "size of double: " << sizeof(g) << endl;

  return 0;
}

// ======Output======
// size of int: 4
// size of float: 4
// size of character: 1
// size of boolean: 1
// size of shortInt: 2
// size of longInt: 8
// size of double: 8