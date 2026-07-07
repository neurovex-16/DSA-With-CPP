#include <iostream>
#include <string>
using namespace std;

// Helper function to compare two frequency arrays
bool isFreqSame(int freq1[], int freq2[]) {
    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            return false;
        }
    }
    return true;
}

// Main function to check if s2 contains a permutation of s1
bool checkInclusion(string s1, string s2) {
    int freq[26] = {0};
    
    for(int i = 0;i<s1.length();i++){
        freq[s1[i] - 'a']++;
    }
    
    int windSize = s1.length();

    for (int i = 0; i < s2.length(); i++) {
        int windIdx = 0,idx = i;
        int windFreq[26] = {0};

    while(windIdx < windSize && idx < s2.length()){
        windFreq[s2[idx] - 'a']++;
        windIdx++,idx++;
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
    cin >> s1;
    cout << "Enter s2: ";
    cin >> s2;

    if (checkInclusion(s1, s2)) {
        cout << "True (Permutation found in s2)" << endl;
    } else {
        cout << "False (No permutation found)" << endl;
    }

    return 0;
}



// handle all the cases
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool isFreqSame(unordered_map<char, int>& freq1, unordered_map<char, int>& freq2) {
    return freq1 == freq2;
}

bool checkInclusion(string s1, string s2) {
    unordered_map<char, int> freq;

    for (char c : s1) {
        freq[c]++;
    }

    int windSize = s1.length();

    for (int i = 0; i <= s2.length() - windSize; i++) {
        unordered_map<char, int> windFreq;

        for (int j = 0; j < windSize; j++) {
            windFreq[s2[i + j]]++;
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

    if (checkInclusion(s1, s2)) {
        cout << "True (Permutation found in s2)" << endl;
    } else {
        cout << "False (No permutation found)" << endl;
    }

    return 0;
};


