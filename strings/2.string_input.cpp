#include <iostream>
#include <vector>
using namespace std;

int main()
{
  // while taking string input from cin: as soon as it sees a space it will stop taking the input

  // char sentence[100];
  // cin >> sentence;
  // cout << sentence;
  // If I give input "Bhanuj Gandhi", it will just take Bhanuj as input and cout that only

  // Instead we can use cin.get() which will accept one char at a time and will not ignore whitespaces

  vector<char> new_sent;
  int len = 1;
  char temp = cin.get();
  while (temp != '\n')
  {
    new_sent.push_back(temp);
    temp = cin.get();
  }

  for (auto x : new_sent)
  {
    cout << x;
  }

  cout << endl
       << new_sent.size();

  return 0;
}