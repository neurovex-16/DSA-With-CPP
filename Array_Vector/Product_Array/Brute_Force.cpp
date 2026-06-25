#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> answer(n);

    for (int i = 0; i < n; i++) {
        int prod = 1;
        for (int j = 0; j < n; j++) {
            if (i != j) {
                prod *= nums[j];
            }
        }
        answer[i] = prod;
    }

    return answer;
}
int main() {
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = productExceptSelf(nums);

    for (int x : result)
        cout << x << " ";
    cout << endl;

    return 0;
}