#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> span(const vector<int>& price)
{
    int n = price.size();
    vector<int> ans(n, 0);
    stack<int> s;
    for(int i=0;i<price.size();i++)
    {
        while(s.size() > 0 && price[s.top()] <= price[i])
        {
            s.pop();
        }

        if(s.empty())
        {
            // for day zero, span = 1
          ans[i]=i+1;
        }
        else
        {
            // span = i-prevHigh
            ans[i]=i-s.top();
        }
        s.push(i);
    }
    return ans;

}
int main()
{
  int n;
  cout << "Enter number of days: ";
  cin >> n;

    vector<int> price(n);
    cout << "Enter stock prices for " << n << " days: ";
    for(int i = 0; i < n; i++)
    {
        cin >> price[i];
    } 
    cout<<"Your stock span is ";
    vector<int> result = span(price);
    for(int val : result)
    {
        cout<<val<<" ";
    }
    return 0;
}