#include<iostream>
#include<vector>
#include<queue>

using namespace std;

// For building haffman tree
// to handle equal frequemcy, we have to store index 
// Minimum Index will be stored 

class Node{
  public:
  int data;
  int idx;
  Node*left;
  Node*right;
  
  Node(int d,int i){
      data = d;
      idx = i;
      left = NULL;
      right = NULL;
  }
};


class cmp{
    public:
    bool operator()(Node*a,Node*b){
    if(a->data == b->data)
        return a->idx > b->idx;
    return a->data > b->data;
    }
};

class Solution {
  public:
  void traverse(Node*root,vector<string>&ans,string temp){
    if(root == NULL)
        return;
      // base case
      if(root->left == NULL && root->right == NULL){
          // If only one character
        if(temp.empty())
          temp = "0";
       ans.push_back(temp);
          return;
      }
      
      traverse(root->left,ans,temp +'0');
      traverse(root->right,ans,temp + '1');
      
  }
    vector<string> huffmanCodes(string &s, vector<int> f) {
        // create min heap
        priority_queue<Node*, vector<Node*>, cmp> pq;
        
        int n = f.size();
        for(int i = 0; i<n; i++){
            Node*temp = new Node(f[i],i);
            pq.push(temp);
        }
        
        while(pq.size() > 1){
            Node*left = pq.top();
            pq.pop();
            
            Node*right = pq.top();
            pq.pop();
            
            Node*newNode = new Node(left->data + right->data,
            min(left->idx, right->idx));
            newNode->left = left;
            newNode->right = right;
            pq.push(newNode);
        }
        Node*root = pq.top();
        vector<string>ans;
        string temp = "";
         // Tree Traversal for answer
        traverse(root,ans,temp);
        return ans;
    }
};