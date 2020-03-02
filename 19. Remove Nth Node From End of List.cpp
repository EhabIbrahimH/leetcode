class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(-1); 
        dummy->next = head;
        ListNode* slow = dummy;
        ListNode* fast = dummy;
        slow->next = head;
        fast->next = head;
        for(int i = 0; i < n; i++) { //n will always be valid, if not, must check against null
            fast = fast->next;
        }
        while(fast->next != NULL) {
            fast = fast->next;
            slow =slow->next;
        }
        if(slow->next != NULL) {
            slow->next = slow->next->next;
        }
        return dummy->next;       
    }
};