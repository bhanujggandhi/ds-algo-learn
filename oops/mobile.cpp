#include <iostream>
using namespace std;

class A
{
private:
  int weight;

public:
  A(int x = 0)
  {
    weight = x;
  }

  // Operator overloading
  A operator+(A w2)
  {
    A temp;
    temp.weight = weight + w2.weight;
    return temp;
  }

  // Traditional method
  A addWeight(A w2)
  {
    A temp;
    temp.weight = weight + w2.weight;
    return temp;
  }

  void getWeight()
  {
    cout << endl
         << weight;
  }
};

int main()
{
  int a = 63, b = 74, c = 0;
  c = a + b;

  A person1(63);
  A person2(77);
  A total;

  total = person1 + person2;

  person1.getWeight();
  person2.getWeight();
  total.getWeight();

  total = total.addWeight(person2);
  total.getWeight();
}