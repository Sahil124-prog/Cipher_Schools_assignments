#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};
Node* insertInSortedOrder(Node* head, int value) {
    Node* newNode = new Node(value);
    if (!head || head->data >= value) {
        newNode->next = head;
        return newNode;
    }

    Node* current = head;
    while (current->next && current->next->data < value) {
        current = current->next;
    }

    newNode->next = current->next;
    current->next = newNode;

    return head;
}
void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data;
        if (current->next != nullptr) cout << "->";
        current = current->next;
    }
    cout << endl;
}
Node* createLinkedList() {
    int n, value;
    cout << "Enter the number of elements in the linked list: ";
    cin >> n;
    Node* head = nullptr;
    Node* tail = nullptr;

    cout << "Enter the elements in sorted order: ";
    for (int i = 0; i < n; ++i) {
        cin >> value;
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
            tail = head;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}

int main() {
    Node* head = createLinkedList();
    int value;
    cout << "Enter the value to insert: ";
    cin >> value;

    head = insertInSortedOrder(head, value);

    cout << "Updated Linked List: ";
    printList(head);
    return 0;
}
