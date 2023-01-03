// Abstraction means displaying only essential information and hiding the details. Data abstraction refers to providing only essential information about the data to the outside world, hiding the background details or implementation.

#include <iostream>
using namespace std;

class implementAbstraction
{
private:
  int a, b;

public:
  void set(int x, int y)
  {
    a = x;
    b = y;
  }

  void get()
  {
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
  }
};

int main()
{
  implementAbstraction bhanuj;
  bhanuj.set(5, 10);
  bhanuj.get();
  return 0;
}