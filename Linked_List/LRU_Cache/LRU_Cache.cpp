#include <unordered_map>

class LRUCache 
{
public:
class Node
{
    public:
    int key,val;
    Node*prev;
    Node*next;

    Node(int k,int v)
    {
        key=k;
        val=v;
        prev=next=nullptr;
    }
};

// to handle Null
   Node*head=new Node(-1,-1);
   Node*tail=new Node(-1,-1);

   std::unordered_map<int,Node*> m;
   int limit;
   void addNode(Node*newNode)
   {
    Node*oldNext=head->next;
    head->next=newNode;
    oldNext->prev=newNode;
    newNode->next=oldNext;
    newNode->prev=head;
   }

   void delNode(Node*oldNode)
   {
    Node*oldPrev=oldNode->prev;
    Node*oldNext=oldNode->next;

    oldPrev->next=oldNext;
    oldNext->prev=oldPrev;
   }

    LRUCache(int capacity)
     {
        limit=capacity;
        head->next=tail;
        tail->prev=head;
    
    }
    
    int get(int key)
    {
        // Not Found
        if(m.find(key) == m.end())
        {
            return -1;
        }
        // the (key,value) pair is found, so we will move it to front
        Node*ansNode=m[key];
        int ans=ansNode->val;
        m.erase(key);
        delNode(ansNode);

        addNode(ansNode);
        m[key]=ansNode;

        return ans;
    }

    
    void put(int key, int value) 
    {
        // if key exists but new value,then old value will be overwritten and it will be moved to front
        if(m.find(key)!=m.end())
        {
            Node*oldNode=m[key];
            delNode(oldNode);
            m.erase(key);
        }
        // limit reached
        if(m.size()==limit) 
        {
            m.erase(tail->prev->key);
            delNode(tail->prev);
        }
        // add
        Node*newNode=new Node(key,value);
        addNode(newNode);
        m[key]=newNode;

    }
};

