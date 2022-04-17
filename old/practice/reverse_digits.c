#include <stdio.h>
#include <math.h>

int reverse_num(int n)
{
    int digits = 0;
    int temp = n;
    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }

    int rev_num = 0;
    temp = n;
    while (digits > 0)
    {
        int num = temp % 10;
        rev_num = rev_num + (pow(10, digits - 1) * num);
        digits--;
        temp = temp / 10;
    }
    return rev_num;
}

int main()
{
    int num;

    printf("Input a number");
    scanf("%d", &num);

    printf("The reverse of the input number is %d! \n", reverse_num(num));
    return 0;
}