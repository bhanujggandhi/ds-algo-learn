#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  int n;
  cin >> n;

  cin.get(); // After entering n value we press enter which is consumed by cin.getline() below. So it will take one less string than n. To make it work we want one \n to cosumed. So cin.get will be useful

  char sentence[1000];
  char largest[1000];

  int largest_len = 0;

  while (n--)
  {
    cin.getline(sentence, 1000);

    int len = strlen(sentence);

    if (len > largest_len)
    {
      largest_len = len;
      strcpy(largest, sentence);
    }
  }

  cout << "Largest string is \"" << largest << "\"" << endl;
}