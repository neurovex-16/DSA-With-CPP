/*
    Approach: Binary Exponentiation

    Use the binary representation of the exponent
    to compute the power efficiently.

    - If the exponent is odd, multiply the result
      by the current base.
    - Square the base after each iteration.
    - Divide the exponent by 2.
*/

#include <iostream>
using namespace std;

int main() {
    double x;
    long long n;
    cout << "Enter base (x): ";
    cin >> x;
    cout << "Enter exponent (n): ";
    cin >> n;

    double result = 1;
    long long exp = n;
    if(n==0) return 1.0;  
    if(x==0) return 0.0; 
    if(x==1) return 1.0; 
    if(x==-1 && n%2 == 0) return 1.0; 
    if(x==-1 && n%2 != 0) return -1.0; 

    if (exp < 0) {
        exp = -exp;
    }
    
    double base = x;

    while (exp > 0) {
        if (exp % 2 == 1) {
            result *= base;
        }
        base *= base;
        exp /= 2;
    }

    if (n < 0) {
        result = 1.0 / result;
    }

    cout << "Result: " << result << endl;
    return 0;
}
