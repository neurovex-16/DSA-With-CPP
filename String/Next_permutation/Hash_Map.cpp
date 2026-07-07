#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool isFreqSame(unordered_map<char, int>& freq1,
                unordered_map<char, int>& freq2) {
    return freq1 == freq2;
}

bool checkInclusion(string s1, string s2) {

    if (s1.length() > s2.length())
        return false;

    unordered_map<char, int> freq;

    for (int i = 0; i < s1.length(); i++) {
        freq[s1[i]]++;
    }

    int windSize = s1.length();

    for (int i = 0; i + windSize <= s2.length(); i++) {

        unordered_map<char, int> windFreq;

        int idx = i;
        int windIdx = 0;

        while (windIdx < windSize && idx < s2.length()) {
            windFreq[s2[idx]]++;
            windIdx++;
            idx++;
        }

        if (isFreqSame(freq, windFreq)) {
            return true;
        }
    }

    return false;
}

int main() {
    string s1, s2;

    cout << "Enter s1: ";
    getline(cin, s1);

    cout << "Enter s2: ";
    getline(cin, s2);

    if (checkInclusion(s1, s2))
        cout << "True (Permutation found in s2)\n";
    else
        cout << "False (No permutation found)\n";

    return 0;
}