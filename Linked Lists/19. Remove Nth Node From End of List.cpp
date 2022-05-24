class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *res = new ListNode();
        res -> next = head;
        ListNode *fast = res, *slow = res;
        for(int i = 1; i <= n; i++)
            fast = fast->next;
        while(fast -> next != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        slow -> next = slow -> next -> next;
        return res -> next;
    }
};
