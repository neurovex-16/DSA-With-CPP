struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode*slow=head;
        ListNode*fast=head;

        while(fast!=nullptr && fast->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                return true;
            }
        }
        return false;
    }
};



class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
         ListNode*slow=head;
         ListNode*fast=head;
         bool isCycle = false;

        while(fast!=nullptr && fast->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                isCycle=true;
                break;
            }
        }
    if(!isCycle)
    {
        return nullptr;
    }
   slow=head;
   while(slow!=fast)
   {
    slow=slow->next;
    fast=fast->next;
   }
   return slow;
}
};






