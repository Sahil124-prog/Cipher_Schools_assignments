//Question 1
#include<bits/stdc++.h>
using namespace std;
class Node{
public:
int val;
Node* next;
Node(int val){
    this->val=val;
    this->next=NULL;
} 
};
void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;  
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    //Node* e = new Node(10);
    a->next=b;
    b->next=c;
    c->next=d;
    printLinkedList(a);
}
//Question2 
#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};
void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertAtTail(Node*& head, int val) {
    Node* n = new Node(val);
    if (head == NULL) {
        head = n;
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = n;
    }
}
int main() {
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    a->next = b;
    b->next = c;
    printLinkedList(a);
    Node* head = a; 
    insertAtTail(head, 40);
    printLinkedList(head);
    while (head != NULL) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    return 0;
}