#include <iostream>
#include <vector>
using namespace std;

bool searchInRow(vector<vector<int>>& matrix, int target, int row) 
{ // search element
    int n = matrix[0].size();
    int st = 0, end = n - 1;

    while (st <= end)
     {
        // mid means coloumn
        int mid = st + (end - st) / 2;
        if (matrix[row][mid] == target)
         {
            return true;
        } 
        else if (matrix[row][mid] < target) 
        {
            st = mid + 1;
        }
         else 
         {
            end = mid - 1;
        }
    }
    return false;
}

bool searchMatrix(vector<vector<int>>& matrix, int target) 

{  
    // find specific row
    int m = matrix.size(), n = matrix[0].size();
    int startRow = 0, endRow = m - 1;

    while (startRow <= endRow) 
     {
        int midRow = startRow + (endRow - startRow) / 2;
        if (target >= matrix[midRow][0] && target <= matrix[midRow][n - 1])
         {
            return searchInRow(matrix, target, midRow);
        } 
        else if (target > matrix[midRow][n - 1])
         {
            startRow = midRow + 1;
        } 
        else
         {
            endRow = midRow - 1;
        }
    }
    return false;
}

int main() 
{
    int m, n, target;
    cout << "Enter rows and columns: ";
    cin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n));
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            cin >> matrix[i][j];

    cout << "Enter target to search: ";
    cin >> target;

    if (searchMatrix(matrix, target))
        cout << "Target found.\n";
    else
        cout << "Target not found.\n";

    return 0;
}

