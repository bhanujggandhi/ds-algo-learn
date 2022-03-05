#include <iostream>
using namespace std;

/* cin.getline() is a better way. It can take upto 3 params
1. array in which you want to store.
2. Size of the array or size of the string. Anything in input above that limit will be ignored.
3. Termination character. By default it is \n (enter) but we can make it anything according to the usecase.
*/

int main()
{
  char sentence[100];

  cin.getline(sentence, 100, '#');

  cout << sentence << endl;

  return 0;
}