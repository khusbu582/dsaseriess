//ques->1 finding paindrome 
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;
        
        // Step 1: Find the middle of the linked list
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        // Step 2: Reverse the second half of the list
        ListNode* prev = nullptr;
        while (slow) {
            ListNode* nextNode = slow->next;
            slow->next = prev;
            prev = slow;
            slow = nextNode;
        }
        
        // Step 3: Compare the first and second half
        ListNode* left = head;
        ListNode* right = prev;
        while (right) { // Right half may be shorter
            if (left->val != right->val) return false;
            left = left->next;
            right = right->next;
        }
        
        return true;
    }
};
//TC=O(N)
//SC=O(1)
//ques-> 2 detect loop and finding the number of nodes in loop
/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    // Function to find the length
    int countNodesinLoop(Node *head) {
        // Code here
        
        Node *slow = head, *fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                int count = 1;
                Node *temp = slow;
                while (temp->next != slow) {
                    count++;
                    temp = temp->next;
                }
                return count;
            }
        }
        return 0;
    
    }
};
//TC=O(N)
//SC=O(1)
