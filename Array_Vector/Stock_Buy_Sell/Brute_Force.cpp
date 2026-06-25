#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices)
{
    int maxProfit = 0;
    int n = prices.size();

    for(int buy = 0; buy < n; buy++)
    {
        for(int sell = buy + 1; sell < n; sell++)
        {
            int profit = prices[sell] - prices[buy];
            maxProfit = max(maxProfit, profit);
        }
    }
    return maxProfit;
}

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    cout << "Maximum Profit: " << maxProfit(prices) << endl;

    return 0;
}