#include <iostream>
using namespace std;

long long power(int base, int exponent)
{
    long long result = 1;

    for(int i = 0; i < exponent; i++)
    {
        result *= base;
    }

    return result;
}

int main()
{
    int base, exponent;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;
    cout << base << "^" << exponent
         << " = " << power(base, exponent) << endl;
    return 0;
}