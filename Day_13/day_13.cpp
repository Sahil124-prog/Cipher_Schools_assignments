#include <iostream>
using namespace std;

int main() {
    int* ptr = new int;
    *ptr = 25;
    cout << "Value of dynamically allocated variable: " << *ptr << endl;
    cout << "Address of dynamically allocated variable: " << ptr << endl;
    delete ptr;

    return 0;
}
