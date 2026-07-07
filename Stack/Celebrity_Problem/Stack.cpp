 #include<iostream>
#include<vector>
#include<stack>
using namespace std;

int getCel(vector<vector<int>>arr) // as 2D
{
  int n=arr.size();
  stack<int>s;

  for(int i=0;i<n;i++)
  {
    s.push(i);
  }

  while(s.size()>1)
  {
    int i=s.top();
    s.pop();

    int j=s.top();
    s.pop();

    if(arr[i][j] == 0)
    {
        s.push(i);
    }
    else
    {
        s.push(j);
    }
  }

  int celeb=s.top();
  for(int i=0;i<n;i++)
  {
    if(i!=celeb && (arr[i][celeb]==0 || arr[celeb][i] == 1))
    {
        return -1;
    }
  }
  return celeb;
}

int main()
{
   int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;
    vector<vector<int>> arr(rows, vector<int>(cols));
     cout << "Enter " << rows << "x" << cols << " matrix:\n";
    for(int i = 0; i < rows; i++) 
    {
        for(int j = 0; j < cols; j++)
      {
            cin >> arr[i][j];
        }
    }

    int ans=getCel(arr);
    cout<<"Celebrety is : " << ans << endl;
}