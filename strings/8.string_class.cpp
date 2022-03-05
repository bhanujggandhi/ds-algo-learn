#include <iostream>
#include <string>
using namespace std;

int main()
{
  char s[1000] = {'1', 'a', 'b', 'c', '\0'};
  // Another way to use string is string class

  string s_class = "Hello World"; // Dynamic
  string s_class_2("Hello World Constructor");
  cout << s_class << endl;
  cout << s_class_2 << endl;

  // How to take input?
  string input_lo;
  getline(cin, input_lo, '.');
  cout << input_lo << endl;
  for (char ch : input_lo)
  {
    cout << ch;
  }

  cout << endl;
  // vector<string> ...
}