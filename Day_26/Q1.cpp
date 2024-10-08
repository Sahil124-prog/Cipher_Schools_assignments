//Implement priority using linked list
#include <iostream>
using namespace std;

class PriorityQueue {
private:
    int arr[100];  
    int size;      

public:
    // Constructor
    PriorityQueue() {
        size = 0;
    }

    // Function to insert an element into the priority queue
    void enqueue(int value) {
        if (size == 100) {
            cout << "Priority Queue is full!" << endl;
            return;
        }

        int i;
        // Shift elements that are smaller than the new element to make room
        for (i = size - 1; i >= 0 && arr[i] < value; i--) {
            arr[i + 1] = arr[i];
        }

        // Insert the new element in the correct position
        arr[i + 1] = value;
        size++;

        cout << "Inserted " << value << " into the priority queue." << endl;
    }

    // Function to remove the highest priority element
    void dequeue() {
        if (size == 0) {
            cout << "Priority Queue is empty!" << endl;
            return;
        }

        cout << "Removed " << arr[0] << " from the priority queue." << endl;
        // Shift all elements one position to the left
        for (int i = 0; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    }

    // Function to return the element with the highest priority (peek)
    void peek() {
        if (size == 0) {
            cout << "Priority Queue is empty!" << endl;
            return;
        }

        cout << "The highest priority element is: " << arr[0] << endl;
    }

    // Function to check if the priority queue is empty
    bool isEmpty() {
        return size == 0;
    }

    // Function to display the contents of the priority queue
    void display() {
        if (size == 0) {
            cout << "Priority Queue is empty!" << endl;
            return;
        }

        cout << "Priority Queue: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    PriorityQueue pq;

    pq.enqueue(10);
    pq.enqueue(30);
    pq.enqueue(20);
    pq.enqueue(40);

    pq.display();   
    pq.peek();      
    pq.dequeue();   
    pq.display();   
    pq.peek();      

    return 0;
}
