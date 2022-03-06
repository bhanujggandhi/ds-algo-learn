#include <iostream>
using namespace std;

int main()
{

  char numbers[][13] = {"one",
                        "two",
                        "three",
                        "forty",
                        "eight",
                        "hundred",
                        "bhanujgandhi"};

  // In case of 2D character array we can treat them as 1D because of the behavior of char strings. If cout is supplied with a string it will stop only when \0 char will come. So below loop will print all the strings completely and not just the base address
  for (int i = 0; i < 7; i++)
  {
    cout << numbers[i] << endl;
  }

  return 0;
}