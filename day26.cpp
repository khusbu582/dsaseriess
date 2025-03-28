//ques->1
/* a Node of the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

// Function to insert a new node at given position in doubly linked list.
class Solution {
  public:
    // Function to insert a new node at given position in doubly linked list.
    Node *addNode(Node *head, int pos, int data) {
         Node* newNode = new Node(data);
        
        if (head == nullptr) return newNode;

        Node* temp = head;
        
        for (int i = 0; i < pos && temp->next != nullptr; i++) {
            temp = temp->next;
        }
        
        newNode->next = temp->next;
        newNode->prev = temp;
        
        if (temp->next != nullptr) {
            temp->next->prev = newNode;
        }
        
        temp->next = newNode;
        
        return head;
    
    }
};
//TC =O(N)
//SC=O(1)
//ques->2
/* Link list node */
/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

class Solution {
  public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, Node* head, int key) {
        // Code here
        Node* temp = head;
        
        while (temp != nullptr) {
            if (temp->data == key) {
                return true;
            }
            temp = temp->next;
        }
        
        return false;
    }
};
//TC =O(N)
//SC=O(1)
