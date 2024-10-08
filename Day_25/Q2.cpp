/*Ques 2. Implement the stack using linkedlist.*/
#include <iostream>
using namespace std;

// Node structure for linked list
struct Node {
    int data;
    Node* next;
};

// Stack class using linked list
class Stack {
private:
    Node* top;

public:
    Stack() {
        top = nullptr;
    }

    // Push operation
    void push(int x) {
        Node* newNode = new Node();
        newNode->data = x;
        newNode->next = top;
        top = newNode;
        cout << x << " pushed to stack." << endl;
    }

    // Pop operation
    void pop() {
        if (top == nullptr) {
            cout << "Stack Underflow" << endl;
            return;
        }
        cout << top->data << " popped from stack." << endl;
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    // Peek operation (get top element)
    void peek() {
        if (top == nullptr) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Top element is: " << top->data << endl;
        }
    }

    // Check if stack is empty
    bool isEmpty() {
        return top == nullptr;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.peek();
    s.pop();
    s.peek();
    return 0;
}

