//ques-> 1
//link:https://leetcode.com/problems/linked-list-cycle/
//TC=O(n)
//SC=O(1)
//code
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (!head || !head->next) return false; 
        
        ListNode *slow = head;  
        ListNode *fast = head; 

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) return true;
        }

        return false; 
    }
};

//ques-> 2 
//ques link:https://leetcode.com/problems/middle-of-the-linked-list/
//TC=O(n)
//SC=O(1)
//code
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next) {
            slow = slow->next;      
            fast = fast->next->next;  
        }

        return slow;  
    }
};
