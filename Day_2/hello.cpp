#include <iostream>
using namespace std;

int main(){
    int n,k,z;
    cout << "Enter the first number: ";
    cin >> n;
    cout<<endl;
    cout << "Enter the second number: ";
    cin>>k;
    cout<<endl;
    cout << "Enter the third number: ";
    cin>>z;
    cout<<endl;
    int max=0;
    if(n>k && n>z){
        max=n;
    }
    else if(k>n && k>z){
        max=k;
    }
    else{
        max=z;
    }
    cout<<"The largest number is:"<<max;
    return 0;
}
// Question 2

#include <iostream>
using namespace std;

int main() {
    
    int marks;
    cout << "Enter the marks: ";
    cin >> marks;
    
    if(marks <= 100 && marks >= 0){
        if(marks >= 90) cout << "Grade A" << endl;
        else if(marks >= 80 && marks < 90) cout << "Grade B" << endl;
        else if(marks >= 70 && marks < 80) cout << "Grade C" << endl;
        else if(marks >= 60 && marks < 70) cout << "Grade D" << endl;
        else if(marks < 60) cout << "Grade F" << endl;
    } else {
        cout << "Invalid Marks" << endl;
    }
    
    

    return 0;
}
// Question 3

#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "Enter a number (1-12): ";
    cin >> month;

    switch (month) {
        case 1:
            cout << "The month is: January" << endl;
            break;
        case 2:
            cout << "The month is: February" << endl;
            break;
        case 3:
            cout << "The month is: March" << endl;
            break;
        case 4:
            cout << "The month is: April" << endl;
            break;
        case 5:
            cout << "The month is: May" << endl;
            break;
        case 6:
            cout << "The month is: June" << endl;
            break;
        case 7:
            cout << "The month is: July" << endl;
            break;
        case 8:
            cout << "The month is: August" << endl;
            break;
        case 9:
            cout << "The month is: September" << endl;
            break;
        case 10:
            cout << "The month is: October" << endl;
            break;
        case 11:
            cout << "The month is: November" << endl;
            break;
        case 12:
            cout << "The month is: December" << endl;
            break;
        default:
            cout << "Invalid input." << endl;
    }

    return 0;
}
