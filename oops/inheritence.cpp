#include <bits/stdc++.h>
using namespace std;

// Base Class
class Employee
{

public:
  int id;
  float salary;

  Employee(int id_new)
  {
    id = id_new;
    salary = 34.0;
  }
  Employee() {}
};

// Derived Class
// class {{derivedClass-name}} : {{visibility-mode}} {{base-class-name}}

/*
1. Default visibilty mode is private
2. Private visibility Mode:  Public member of the base class becomes private members of the base class
3. Public visibility Mode: Public members of the base class becomes will become public, protected will stay protected, private does not inherit.
4. Private members are never inherited
*/

class Programmer : Employee
{
public:
  Programmer(int impId)
  {
    id = impId;
  }
  int languageCode = 9;

  void getData()
  {
    cout << id << endl;
    cout << salary << endl;
  }
};

int main()
{
  Employee bhanuj(1), priyanka(2);
  cout << bhanuj.salary << endl;
  cout << priyanka.salary << endl;

  Programmer skillF(9);
  cout << skillF.languageCode << endl;
  skillF.getData();
}