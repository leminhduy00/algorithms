class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode();
        ListNode* currNode = head;
        int cal = 0;

        while(l1 || l2 || cal)
        {
            if (l1) {
                cal += l1->val;
                l1 = l1->next;
            }

            if (l2) {
                cal += l2->val;
                l2 = l2->next;
            }

            currNode->next = new ListNode(cal % 10);
            currNode = currNode->next;
            cal /= 10;
        }

        ListNode* result = head->next;
        delete head;

        return result;
    }
};