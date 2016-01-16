// Time:  O(n)
// Space: O(1)

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (head) {
            for (ListNode *odd_tail = head, *cur = odd_tail->next;
                 cur && cur->next;
                 cur = cur->next) {

                ListNode *even_head = odd_tail->next;
                odd_tail->next = cur->next;
                odd_tail = odd_tail->next;
                cur->next = cur->next->next;
                odd_tail->next = even_head;
            }
        }
        return head; 
    }
};
