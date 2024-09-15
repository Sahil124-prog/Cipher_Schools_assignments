//Question 1
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    float grade;

public:
    Student(string name, int age, float grade) {
        this->name = name;
        this->age = age;
        this->grade = grade;
    }
    void displayDetails() {
        cout << "Student Details:" << endl;
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
        cout << "Grade: " << this->grade << endl;
    }
};

int main() {
    Student student1("John Doe", 20, 85.5);
    student1.displayDetails();
    return 0;
}

//Question2 
#include<iostream>
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
void todelete(Node* &head,int data){
        Node* temp=head;
        if(!head) return;
        bool x = false;
        while(temp->next!=NULL){
            if(temp->next->val==data){
                x= true;
                temp->next=temp->next->next;
            }
            temp=temp->next;
        }
        if(x==true) cout<<"The number is deleted"<<endl;
        else cout<<"The number you have entered isn't in the list"<<endl;
}
void display(Node* head){
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->val<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int main(){
    Node* a= new Node(10);
	Node* b= new Node(20);
	Node* c= new Node(30);
	Node* d= new Node(40);
	Node* e= new Node(50);
	a->next=b;
	b->next=c;
	c->next=d;
	d->next=e;
    int x;
    cin>>x; //the value you want to delete 
    todelete(a,x);
    display(a);
}