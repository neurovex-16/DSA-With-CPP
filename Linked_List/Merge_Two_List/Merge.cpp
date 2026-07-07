#include <iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

bool isSorted(ListNode* head) {
    while (head && head->next) {
        if (head->val > head->next->val) return false;
        head = head->next;
    }
    return true;
}

ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
    if (head1 == NULL || head2 == NULL)
        return head1 == NULL ? head2 : head1;

    if (head1->val <= head2->val) {
        head1->next = mergeTwoLists(head1->next, head2);
        return head1;
    } else {
        head2->next = mergeTwoLists(head1, head2->next);
        return head2;
    }
}

void printList(ListNode* head) {
    cout << "\nMerged Sorted List:\n";
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << "\n";
}

ListNode* takeInput(int n) {
    if (n == 0) return NULL;

    int x;
    cin >> x;
    ListNode* head = new ListNode(x);
    ListNode* tail = head;

    for (int i = 1; i < n; i++) {
        cin >> x;
        tail->next = new ListNode(x);
        tail = tail->next;
    }
    return head;
}

int main() {
    int n1, n2;

    cout << "Enter size of 1st list: ";
    cin >> n1;
    cout << "Enter elements of 1st sorted list: ";
    ListNode* head1 = takeInput(n1);

    cout << "\nEnter size of 2nd list: ";
    cin >> n2;
    cout << "Enter elements of 2nd sorted list: ";
    ListNode* head2 = takeInput(n2);

    if (!isSorted(head1) || !isSorted(head2)) {
        cout << "\n❌ List is not sorted\n";
        return 0;
    }

    ListNode* merged = mergeTwoLists(head1, head2);
    printList(merged);

    return 0;
}
