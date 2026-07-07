
#include <iostream>
#include <string>
#include <cctype> 
using namespace std;

bool isValidPalindrome(const string& s)
 {
    int left = 0, right = s.length() - 1;

    while (left < right) 
    {
        // Skip non-alphanumeric characters
        while (left < right && !isalnum(s[left])) left++;
        while (left < right && !isalnum(s[right])) right--;

        // Compare lowercase characters
        if (tolower(s[left]) != tolower(s[right]))
         {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main()
 {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    if (isValidPalindrome(s)) 
    {
        cout << "True (Valid Palindrome)" << endl;
    } 
    else 
    {
        cout << "False (Not a Palindrome)" << endl;
    }

    return 0;
}
