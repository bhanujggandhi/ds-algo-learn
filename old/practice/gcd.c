#include <stdio.h>
#include <limits.h>

int gcd(int a, int b)
{
  if (a == 0)
    return b;
  if (b == 0)
    return a;

  return gcd(b % a, a);
}

int main()
{
  int a, b;
  printf("Enter two numbers for GCD \n");
  scanf("%d %d", &a, &b);

  printf("GCD of %d and %d is %d \n", a, b, gcd(a, b));
  // printf("%d", INT_MAX);
  return 0;
}