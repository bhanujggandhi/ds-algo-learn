#include <stdio.h>

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    return gcd(b % a, a);
}

int lcm(int a, int b)
{
    int g = gcd(a, b);
    int lc;
    lc = (a * b) / g;
    return lc;
}

int main()
{
    int a, b;
    printf("Enter two numbers for LCM \n");
    scanf("%d %d", &a, &b);

    printf("LCM of %d and %d is %d \n", a, b, lcm(a, b));
    return 0;
}