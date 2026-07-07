#include <iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;

        while (curr != NULL) {
            next = curr->next; 
            curr->next = prev;  
            prev = curr;        
            curr = next;        
        }
        return prev;
    }
};

void printLL(ListNode* head) // o(n)
{
    ListNode*temp=head;
    while(temp!=NULL)
    {
        cout<< temp->val <<  " ";
        temp=temp->next;
    }
    cout<<endl;
}

int main() {
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    ListNode* head = NULL;
    ListNode* tail = NULL;

    cout << "Enter values:\n";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ListNode* newNode = new ListNode(x);

        if (!head) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    cout << "Original List: ";
    printLL(head);

    Solution s;
    head = s.reverseList(head);

    cout << "Reversed List: ";
    printLL(head);

    return 0;
}
