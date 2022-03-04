#include <bits/stdc++.h>
using namespace std;

class Parent
{
public:
  Parent()
  {
    cout << "Parent ka constructor" << endl;
  }
  Parent(int a)
  {
    cout << "Parent ka parameter constructor" << endl;
  }
  int id_p;
};

class Child : public Parent
{
public:
  int id_c;
};

int main()
{
  Child c1;
  // Only default of parent class is inherited and not the parameterised constructor
  // Child c2(2);

  c1.id_p = 7;
  c1.id_c = 2;

  cout << "Child ID is: " << c1.id_c << endl;
  cout << "Parent ID is: " << c1.id_p << endl;

  return 0;
}