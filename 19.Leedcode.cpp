/**
 *  * Definition for singly-linked list.
 *   * struct ListNode {
 *    *     int val;
 *     *     struct ListNode *next;
 *      * };
 *       */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode ret, *p, *q;
    ret.next = head;
    p = &ret, q = &ret;
    while(n--) p = p->next;
    p = p->next;
    while(p) {
        p = p->next;
        q = q->next;
    }
    p = q->next;
    q->next = p->next;
    free(p);
    return ret.next;
}
