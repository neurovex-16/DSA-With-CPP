#include<iostream>
#include<stack>
using namespace std;

class Solution {
public:
    bool isValid(string str) {
        stack<char> st;

        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '(' || str[i] == '{' || str[i] == '[') {
                st.push(str[i]);
            } else {
                // If it is empty, it means there is no matching opening bracket for the current closing bracket
                if (st.empty()) return false;

                if ((str[i] == ')' && st.top() == '(') ||
                    (str[i] == '}' && st.top() == '{') ||
                    (str[i] == ']' && st.top() == '[')) {
                    st.pop();
                } else {
                    return false;
                }
            }
        }
        // If the stack is empty, it means all opening brackets have been matched with closing brackets
        return st.empty();
    }
};

int main() {
    Solution s;
    cout<<"Enter your string: ";
    string str;
    cin >> str;
    cout << "Your string is " << (s.isValid(str) ? "Valid" : "Invalid");
    return 0;
}
