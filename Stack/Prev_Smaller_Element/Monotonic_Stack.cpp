#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> prevSmallerElement(vector<int> arr)
{
    vector<int> ans(arr.size(), 0);
    stack<int> s;

    for(int i = 0; i < arr.size(); i++)
    {
        while(s.size() >0 && s.top() >= arr[i])
        {
            s.pop();
        }

        if(s.empty())
            ans[i] = -1;
        else
            ans[i] = s.top();

        s.push(arr[i]);
    }
    return ans;
}

int main()
{
    cout<<"How many elements?: ";
    int n;
    cin >> n;                

    vector<int> arr(n);
    cout<<"Enter the elements ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];       
    }

    vector<int> ans = prevSmallerElement(arr);

    for(int val : ans)
    {
        cout << val << " ";
    }
    cout << endl;
}
