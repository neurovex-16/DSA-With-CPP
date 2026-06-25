#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxArea(vector<int>& height) {
    int n = height.size();
    int maxWater = 0;

    for (int i = 0; i < n;i++) {
        for (int j = i + 1; j < n; j++) {
            int h = min(height[i], height[j]); 
            int w = j - i;                     
            int area = h * w;
            maxWater = max(maxWater, area);
        }
    }

    return maxWater;
}

int main() {
    int n;
    cout << "Enter number of heights: ";
    cin >> n;

    vector<int> height(n);
    cout << "Enter the heights:\n";
    for (int i = 0; i < n; ++i)
        cin >> height[i];

    cout << "Maximum water that can be contained : " << maxArea(height) << endl;

    return 0;
}
 