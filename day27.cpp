//ques->1
/*
class DLLNode {
  public:
    int data;
    DLLNode *next;
    DLLNode *prev;

    DLLNode(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/
class Solution {
  public:
   
    DLLNode* reverseDLL(DLLNode* head) {
        if (head == NULL || head->next == NULL) {
            return head; 
        }
        
        DLLNode* current = head;
        DLLNode* temp = NULL;

        while (current != NULL) {
            // Swap next and prev pointers
            temp = current->prev;
            current->prev = current->next;
            current->next = temp;

            
            current = current->prev;
        }

        // The new head is the last node we processed
        return temp->prev;
    }
};
// time complexity: O(n) 
//space complexity: O(1).
//ques->2
/* Structure of Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution {
  public:
    // Function to delete a node at given position.
    Node* deleteNode(Node* head, int x) {
        // Your code here
        if (head == NULL) return NULL;

        Node* temp = head;

        if (x == 1) {
            head = head->next;
            if (head != NULL) head->prev = NULL;
            delete temp;
            return head;
        }

        for (int i = 1; temp != NULL && i < x; i++) {
            temp = temp->next;
        }

        if (temp == NULL) return head;

        if (temp->next != NULL) temp->next->prev = temp->prev;
        if (temp->prev != NULL) temp->prev->next = temp->next;

        delete temp;
        return head;
    }
};
// time complexity: O(n) 
//space complexity: O(1).
