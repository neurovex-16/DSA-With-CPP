#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& mat) {
    int m = mat.size(), n = mat[0].size();
    int srow = 0, scol = 0, erow = m - 1, ecol = n - 1;
    vector<int> ans;

    while (srow <= erow && scol <= ecol) {
        // top row
        for (int j = scol; j <= ecol; j++) {
            ans.push_back(mat[srow][j]);
        }
        // right column
        for (int i = srow + 1; i <= erow; i++) {
            ans.push_back(mat[i][ecol]);
        }
        // bottom row
        for (int j = ecol - 1; j >= scol; j--) {
            if (srow == erow) break;
            ans.push_back(mat[erow][j]);
        }
        // left column
        for (int i = erow - 1; i > srow; i--) {
            if (scol == ecol) break;
            ans.push_back(mat[i][scol]);
        }
        srow++, scol++, erow--, ecol--;
    }

    return ans;
}

int main() {
    int m, n;
    cout << "Enter number of rows and columns: ";
    cin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n));
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];

    vector<int> result = spiralOrder(matrix);
    cout << "Spiral order: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
