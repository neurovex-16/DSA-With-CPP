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
    ListNode* middleNode(ListNode* head) {
        int size = 0;
        ListNode* temp = head;

        // Size Calculation
        while (temp != NULL) {
            size++;
            temp = temp->next;
        }

        int midPos = (size / 2) + 1;

        temp = head;
        for (int i = 1; i < midPos; i++) {
            temp = temp->next;
        }

        return temp;
    }
};

int main() {
    int n;
    cin >> n;

    if (n == 0) return 0;

    int val;
    cin >> val;

    ListNode* head = new ListNode(val);
    ListNode* temp = head;

    for (int i = 1; i < n; i++) {
        cin >> val;
        temp->next = new ListNode(val);
        temp = temp->next;
    }

    Solution obj;
    ListNode* mid = obj.middleNode(head);

    cout << mid->val << endl;

    return 0;
}