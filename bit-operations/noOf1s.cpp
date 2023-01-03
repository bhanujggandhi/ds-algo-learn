#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a decimal number: " << endl;
    cin >> n;
    int x = n;

    int count = 0;
    while (x != 0)
    {
        if (x & 1 == 1)
        {
            count++;
        }
        x = x >> 1;
    }
    cout << "Number of 1s in binary representation of " << n << " are " << count << endl;

    return 0;
}
