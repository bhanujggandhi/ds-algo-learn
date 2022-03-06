#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
Run Length Encoding for String Compression
If compressed string is bigger than original return orignal string
Input: aaabbccddee
Output: a3b2c2d2e2

Input: abcd
Output: abcd
*/

string compress_string(string str)
{
  int n = str.length();
  string output;

  int j = 0;
  while (j < n)
  {
    int count = 1;
    while (j < n - 1 and str[j + 1] == str[j])
    {
      count++;
      j++;
    }
    output = output + str[j];
    output = output + to_string(count);
    j++;
  }

  if (output.length() > n)
  {
    return str;
  }
  return output;
}

int main()
{
  string s1 = "aaabbccddee";
  cout << compress_string(s1) << endl;
  string s2 = "abcd";
  cout << compress_string(s2) << endl;

  return 0;
}