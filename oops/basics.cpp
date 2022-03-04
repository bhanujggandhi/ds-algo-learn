#include <iostream>
using namespace std;

// OOPS is a programming paradigm which is used to solve a specific type of problem.

/* There are two types of data types
    1. Predefined: int, char, etc.
    2. User defined: Class, objects, etc.
*/
// Class is a user defined data types.

/*
Access Modifiers:
  1. Private
  2. Public
  3. Protected
*/

// Everything in a class by default is private in C++

// Constructor is a special method (function) which is invoked whenever we instantiate an object from a class.
// It does not have any return type

class Employee
{
  string Name;
  string Company;
  int Age;

public:
  Employee(string Name, string Company, int Age)
  {
    this->Name = Name;
    this->Company = Company;
    this->Age = Age;
  }
  void IntroduceYourself()
  {
    cout << "Hello, My Name is " << this->Name << ". I work for " << this->Company << ". I am " << this->Age << " years old." << endl;
  }
};

int main()
{
  Employee e1("Bhanuj", "Zivago Pharma", 21);

  e1.IntroduceYourself();

  Employee e2 = Employee("Priyanka", "Amazon", 26);

  e2.IntroduceYourself();

  return 0;
}