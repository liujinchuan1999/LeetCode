tion for singly-linked list.
 * struct ListNode {
 *  *     int val;
 *   *     ListNode *next;
 *    *     ListNode(int x) : val(x), next(NULL) {}
 *     * };
 *      */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (head == NULL) return head;
        ListNode *ret = new ListNode(0);
        ret->next = head;
        ListNode *p = ret, *q = ret;
        p = p->next;
        while(p) {
            if(p->val == val && p->next != NULL) {
                q->next = p->next;
            }else if(p->val == val && p->next == NULL) {
                q->next = NULL;
            }else {
                 q = q->next;
            }
            p = p->next;
        }
        return ret->next;
    }
};
