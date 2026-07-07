#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main() {
    int n;
    cin >> n; // size of the grid (n x n)
    vector<vector<int>> grid(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    vector<int> ans;
    unordered_set<int> s;
    int a, b; // a = repeated number, b = missing number

    int expSum = 0, actualSum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            actualSum += grid[i][j];

            if (s.find(grid[i][j]) != s.end()) {
                a = grid[i][j]; // repeated number found
                ans.push_back(a);
            }
            s.insert(grid[i][j]);
        }
    }
   
    // Sum Calculation
    // Expected Sum
    expSum = (n * n) * (n * n + 1) / 2;
    b = expSum + a - actualSum;
    ans.push_back(b);

    cout << ans[0] << " " << ans[1] << endl; // Output repeated and missing

    return 0;
}
