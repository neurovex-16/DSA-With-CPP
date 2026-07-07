#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node*next;

  Node(int val)
  {
    data=val;
    next=NULL;
  }
};
class CircularList{
  Node*head;
  Node*tail;
  public:
  CircularList()
  {
    head=tail=NULL;
  }
 void insertHead(int val) 
 {
    Node*newNode=new Node(val);
    if(head==NULL)
    {
        head=tail=newNode;
        tail->next=head;
    }
    else
  {
    newNode->next=head;
    head=newNode;
    tail->next=head;
}
}

 void insertTail(int val) 
 {
    Node*newNode=new Node(val);
    if(head== NULL)
    {
        head=tail=newNode;
        tail->next=head;
    }
    else
    {
         newNode->next=head;
         tail->next=newNode;
         tail=newNode;
    }
}

void deleteHead()
{
    if(head==NULL)
    return;
    else if(head==tail)
    {
        delete head;
        head=tail=NULL;
    }
    else
    {
      Node*temp=head;
      head=head->next;
      tail->next=head;
    }
}
void deleteTail()
{
     if(head==NULL)
    return;
    else if(head==tail)
    {
        delete head;
        head=tail=NULL;
    }
    else
    {
        Node*temp=tail;
        Node*prev=head;
        while(prev->next!=tail)
        {
            prev=prev->next;
        }
        tail=prev;
        tail->next=head;
        temp->next=NULL;
        delete temp;
    }

}
void print() 
{
    if(head==NULL) 
    return;
    cout<<head->data<<" ";
    Node*temp=head->next;
    while(temp!=head)
    {
        cout<< temp->data <<  " ";
        temp=temp->next;
    }
    cout<<endl;
}


};
int main()
{
 CircularList cll;
 cll.insertHead(1);
 cll.insertHead(2);
 cll.insertHead(3);
 cll.insertTail(4);
 cll.insertTail(5);
 cll.deleteHead();
 cll.deleteTail();
 cll.print();




    return 0;
}