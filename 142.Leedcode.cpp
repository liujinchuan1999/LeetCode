tion for singly-linked list.
 * struct ListNode {
 *  *     int val;
 *   *     struct ListNode *next;
 *    * };
 *     */
struct ListNode *detectCycle(struct ListNode *head) {
    if(head == NULL) return NULL;
    struct ListNode *p = head, *q = head;
    do{
        p = p->next;
        q = q->next;
        if(p == NULL || p->next == NULL) return NULL;
        p = p->next;
    } while (p != q);
    int cnt = 0;
    do{
        cnt++;
        p = p->next;
    } while(p != q);
    p = head, q = head;
    while(cnt--) p  =p->next;
    while(p != q) {
        p = p->next;
        q = q->next;
    }
    return p;
}
