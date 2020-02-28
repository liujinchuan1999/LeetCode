tion for singly-linked list.
 * struct ListNode {
 *  *     int val;
 *   *     ListNode *next;
 *    *     ListNode(int x) : val(x), next(NULL) {}
 *     * };
 *      */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *ret = new ListNode(0);
        ret = NULL;
        ListNode *p = head, *q = head;
        while(p) {
            p = p->next;
            q->next = ret;
            ret = q;
            q = p;
        }
        return ret;
    }
};
