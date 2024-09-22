//Question1
#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* prev;
    Node* next;
    Node(int value) : data(value), prev(nullptr), next(nullptr) {}  // Constructor for Node
};
void insertAtEnd(Node*& head, int data) {
    Node* newNode = new Node(data);   
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}
void insertAtPosition(Node*& head, int position, int data) {
    Node* newNode = new Node(data);
    if (head == nullptr) {
        if (position == 0) {
            head = newNode;
        }
        return;
    }
    Node* temp = head;
    if (position == 0) {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return;
    }
    for (int i = 0; i < position - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }
    if (temp == nullptr || temp->next == nullptr) {
        insertAtEnd(head, data);
    } else {
        newNode->next = temp->next;
        newNode->prev = temp;
        if (temp->next != nullptr) {
            temp->next->prev = newNode;
        }
        temp->next = newNode;
    }
}
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main() {
    Node* head = nullptr;
    insertAtEnd(head, 2);
    insertAtEnd(head, 4);
    insertAtEnd(head, 5);
    cout << "Original List: ";
    printList(head); 
    int position = 2, value = 6;
    insertAtPosition(head, position, value);
    cout << "List after insertion at position " << position << ": ";
    printList(head);  
    return 0;
}
//Question2 
#include <iostream>
using namespace std;
struct ListNode {
    int data;
    ListNode* next;
    ListNode(int value) : data(value), next(nullptr) {}  // Constructor
};
bool hasCycle(ListNode* head) {
    if (head == nullptr || head->next == nullptr) {
        return false;
    }

    ListNode* slow = head;
    ListNode* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next; 
        fast = fast->next->next;  
        if (slow == fast) {
            return true;
        }
    }
    return false;
}
void createCycle(ListNode* head, int pos) {
    if (pos == -1) return;
    ListNode* tail = head;
    ListNode* cycleNode = nullptr;
    int index = 0;
    while (tail->next != nullptr) {
        if (index == pos) {
            cycleNode = tail; 
        }
        tail = tail->next;
        index++;
    }
    tail->next = cycleNode;
}
int main() {
    ListNode* head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);
    int pos = 1;
    createCycle(head, pos);
    if (hasCycle(head)) {
        cout << "true" << endl;  
    } else {
        cout << "false" << endl;  
    }
    return 0;
}
