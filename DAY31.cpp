//ques->1
//CODE->
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
    ListNode* deleteNode(ListNode* prev, ListNode* head) {
        if (prev == nullptr) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }
        ListNode* toDelete = prev->next;
        prev->next = toDelete->next;
        delete toDelete;
        return head;
    }
    ListNode* removeElements(ListNode* head, int val) {
      while (head != nullptr && head->val == val) {
            ListNode* toDelete = head;
            head = head->next;
            delete toDelete;
        }
        ListNode* temp = head;
        while (temp != nullptr&& temp->next!=nullptr) {
            if (temp->next->val == val) {
                head = deleteNode(temp, head);
            }
            else{
            temp = temp->next;
            }
        }
        return head;
    }
};
//TC:O(N)
//SC:O(1)

//ques->2 add two numbers
//CODE
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int n;
        ListNode* result = new ListNode();  // Dummy head
        ListNode* temp = result;
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        int carry = 0;

        while (temp1 != nullptr || temp2 != nullptr || carry != 0) {
            int val1 = (temp1 != nullptr) ? temp1->val : 0;
            int val2 = (temp2 != nullptr) ? temp2->val : 0;

            int sum = val1 + val2 + carry;
            carry = sum / 10;
            n = sum % 10;

            temp->next = new ListNode(n);
            temp = temp->next;

            if (temp1 != nullptr) temp1 = temp1->next;
            if (temp2 != nullptr) temp2 = temp2->next;
        }

        return result->next; 
    }
};
//TC:O(N)
//SC:O(N)
