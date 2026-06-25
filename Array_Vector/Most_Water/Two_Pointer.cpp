#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxArea(vector<int>& height) {
    int maxWater = 0;
    int left = 0, right = height.size() - 1;

    while (left < right) {
        int h = min(height[left], height[right]);
        int w = right - left;
        maxWater = max(maxWater, h * w);
        if (height[left] < height[right])
            left++;
        else
            right--;
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

    cout << "Maximum water that can be contained: " << maxArea(height) << endl;

    return 0;
}