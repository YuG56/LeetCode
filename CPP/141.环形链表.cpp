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
    bool hasCycle(ListNode *head) {
        if(head == nullptr) return false;
        ListNode* fast_ptr = head;
        ListNode* slow_ptr = head;
        while(fast_ptr != NULL && fast_ptr -> next != NULL)
        {
            slow_ptr = slow_ptr -> next;
            fast_ptr = fast_ptr -> next -> next;
            if(fast_ptr == slow_ptr)
                return true;
        }
        return false;
    }
};