#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char a[1000] = "apple";

  // 1. Calculate length of the string
  cout << strlen(a) << endl; // Inside memory +1 char is stored ie \0

  // 2. Copy the string
  char b[1000];
  strcpy(b, a);
  cout << b << endl;

  // 3. Concatination of two string
  char web[] = "www.";
  char domain[] = "bhanujgandhi.me";
  char webdomain[1000];
  strcpy(webdomain, strcat(web, domain));
  cout << webdomain << endl;

  // 4. Comparing two string
  cout << strcmp(webdomain, a) << endl;
  cout << strcmp(a, b) << endl;
  cout << strcmp(a, webdomain) << endl;

  return 0;
}