tion for singly-linked list.
 * struct ListNode {
 *  *     int val;
 *   *     ListNode *next;
 *    *     ListNode(int x) : val(x), next(NULL) {}
 *     * };
 *      */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head == NULL || head->next == NULL) return 1;
        ListNode *fast = head, *slow = head;
        ListNode *p = NULL, *ret = NULL;
        while(fast && fast->next) {
            p = slow;
            slow = slow->next;
            fast = fast->next->next;
            p ->next = ret;
            ret = p;
        }
        if(fast) slow = slow->next;
        while (p) {
            if(p->val != slow->val) return 0;
            p = p->next;
            slow = slow->next;
        }
        return 1;
    }
};
