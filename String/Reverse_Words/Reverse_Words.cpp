#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverseWords(string s) {
    int n = s.length();
    string ans = "";

    // Step 1: Reverse the whole string
    reverse(s.begin(), s.end());

    // Step 2: Process each word
    for (int i = 0; i < n; i++) {
        string word = "";

        // Skip leading spaces
        if (s[i] == ' ') continue;

        // Extract the word
        while (i < n && s[i] != ' ') {
            word += s[i];
            i++;
        }

        // Reverse the word and add to answer
        reverse(word.begin(), word.end());
        if (!word.empty()) {
            ans += " " + word;
        }
    }
    return ans.substr(1);
}

int main() {
    string input;
    getline(cin, input);
    cout << reverseWords(input) << endl;
    return 0;
}
