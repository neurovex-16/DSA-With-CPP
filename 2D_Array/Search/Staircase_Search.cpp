#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) 
{
    int m = matrix.size();
    int n = matrix[0].size();
    int r = 0, c = n - 1;

    while (r < m && c >= 0) {
        if (target == matrix[r][c])
         {
            return true;
        }
         else if (target < matrix[r][c]) 
        {
            c--;
        } 
        else 
        {
            r++;
        }
    }

    return false;
}

int main()
 {
    int m, n, target;
    cout << "Enter number of rows and columns: ";
    cin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n));
    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            cin >> matrix[i][j];

    cout << "Enter target value to search: ";
    cin >> target;

    if (searchMatrix(matrix, target))
        cout << "Target found in the matrix.\n";
    else
        cout << "Target not found in the matrix.\n";

    return 0;
}
