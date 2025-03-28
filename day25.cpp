//ques->2
/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
     
        Node* newNode = new Node(x); // Create a new node

        if (head == nullptr) { // If list is empty, new node becomes head
            return newNode;
        }

        Node* temp = head;
        while (temp->next != nullptr) { // Traverse to the last node
            temp = temp->next;
        }

        temp->next = newNode; // Attach new node at the end
        return head; // Return the head of the list
    }
};
//ques->1
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
    void deleteNode(ListNode* node) {
         if (node == nullptr || node->next == nullptr) return;
        
        node->val = node->next->val;
        ListNode* temp = node->next;
        node->next = node->next->next;
        delete temp;
    }
    
};

