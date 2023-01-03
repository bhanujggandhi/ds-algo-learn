#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  // Creating a Char array
  char a[100];

  char b[100] = {'a', 'b', 'c'}; // wrong

  char c[100] = {'a', 'b', 'c', '\0'}; // Right we should always end with a null element

  char d[100] = "abc"; // This will automatically end the string with a null character

  char e[] = {'a', 'b', 'c', 'd'}; // This may give garbage value as not terminated by null char

  char f[] = {'a', 'b', 'c', 'd', '\0'}; // Will always give right output

  char g[100];
  cin >> g;

  cout << strlen(f) << endl; // 4
  cout << sizeof(f) << endl; // 5 (Also couting \0 character)

  return 0;
}