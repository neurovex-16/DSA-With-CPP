class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};


class Solution {
public:
    Node* flatten(Node* head) {
        if(head == nullptr)
        {
            return head;
        }
        Node* curr = head;
        while(curr != nullptr)
        { 
            if(curr->child != nullptr)
            {
                //child nodes--Flattening
                Node* next = curr->next;
                curr->next = flatten(curr->child); // returns head
                curr->next->prev = curr;
                curr->child = nullptr;

                //find tail
                while(curr->next != nullptr)
                {
                    curr = curr->next;
                }
                //attachment
                if(next != nullptr)  
                {
                    curr->next = next;
                    next->prev = curr;
                }
            }

           curr=curr->next;
        }
        return head;
    }
};