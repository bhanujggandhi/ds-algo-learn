#include <iostream>
using namespace std;

// Given a sentence, count number of alphabets, digits and spaces in the sentence

int main()
{
  // Read and count
  char ch;
  int spaces = 0, alpha = 0, digits = 0;
  ch = cin.get();
  while (ch != '\n')
  {
    if (ch == ' ')
      spaces++;
    // We can use >,< operators to check the range. It works fine
    if (ch >= '0' and ch <= '9')
      digits++;
    if ((ch >= 'a' and ch <= 'z') or (ch >= 'A' and ch <= 'Z'))
      alpha++;

    ch = cin.get();
  }

  cout << "Number of spaces are: " << spaces << endl;
  cout << "Number of digits are: " << digits << endl;
  cout << "Number of characters are: " << alpha << endl;

  return 0;
}