class Solution {
public:
    ListNode *reverseList(ListNode *node)
    {
        ListNode *prev = NULL, *curr = node, *next;
        while(curr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        node = prev;
        return node;
    }
    
    bool isPalindrome(ListNode* head) {
        ListNode *slow = head, *fast = head;
        while(fast-> next != NULL && fast->next->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        slow->next = reverseList(slow->next);
        slow = slow->next;
        ListNode *temp = head;
        
        while(slow != NULL)
        {
            if(temp->val != slow->val)
                return false;
            temp = temp->next;
            slow = slow->next;
        }
        return true;
    }
};
