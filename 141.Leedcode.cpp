tion for singly-linked list.
 * struct ListNode {
 *  *     int val;
 *   *     struct ListNode *next;
 *    * };
 *     */
bool hasCycle(struct ListNode *head) {
    if (head == NULL) return false;
    struct ListNode *p = head, *q = head;
    do {
        p = p->next;
        q = q->next;
        if(q == NULL || q->next == NULL) return false;
        q = q->next;
    } while(p != q);
    return true;
}
