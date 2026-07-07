#include <iostream>
#include <vector>
#include <string>
using namespace std;

int compress(vector<char>& chars) {
    int n = chars.size();
    int idx = 0;

    for (int i = 0; i < n; i++) {
        char ch = chars[i];
        int count = 0;

        while (i < n && chars[i] == ch) {
            count++;
            i++;
        }
        
        if(count == 1){
        chars[idx++] = ch;
        }
       // i --->>>> for traverse
        // idx ---->>> replace

        else{
            chars[idx++] = ch;
            string str = to_string(count);
            for (char dig : str) {
                chars[idx++] = dig;
            }
        }

        i--; // adjust because outer loop will also increment
    }

    chars.resize(idx); //  vector to final size
    return idx;
}

int main() {
    vector<char> chars = {'a','a','b','b','c','c','c'};

    int newLength = compress(chars);

    cout << "Compressed characters: ";
    for (int i = 0; i < newLength; i++) {
        cout << chars[i] << " ";
    }
    cout << "\nLength: " << newLength << endl;

    return 0;
}
