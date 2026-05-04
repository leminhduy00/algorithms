/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* currNode = head;
        int ListSize = 0;
        while (currNode)
        {
            ListSize++;
            currNode = currNode->next;
        }
        currNode = head;
        if (n == ListSize)
        {
            head = head->next;
        }
        else
        {
            for (int i = 1; i < (ListSize - n); i++)
                currNode = currNode->next;

            ListNode* nextNode = currNode->next->next;
            
            currNode->next = nextNode;
        }

        return head;
    }
};