#include <iostream>
using namespace std;

int main(){
    int n1;
    cout << "Enter first integer:";
    cin >> n1;

    int n2;
    cout << "Enter second integer:";
    cin >> n2;
    
    cout << "Addition: " << n1+n2 << endl;
    cout << "Subtraction: " << n1-n2 << endl;
    cout << "Multiplication: " << n1*n2 << endl;

    if(n2 == 0){
        cout << "Invalid 2nd number for division " << endl;
    } else {
        cout << "Division: " << (float) n1/n2 << endl;
    }
    
    return 0;
}
#include <iostream>
using namespace std;
class Complex {
public:
    Complex(double r, double i) : real(r), imag(i) {}
    void display() const {
        cout << real;
        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";
    }
    Complex add(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    
    Complex subtract(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

private:
    double real;  
    double imag;  
};

int main() {
    // Create two complex numbers
    Complex num1(3, 4);
    Complex num2(1, 2);
    Complex sum = num1.add(num2);
    Complex diff = num1.subtract(num2);
    cout << "Complex Number 1: ";
    num1.display();
    cout << endl;

    cout << "Complex Number 2: ";
    num2.display();
    cout << endl;

    cout << "Sum: ";
    sum.display();
    cout << endl;

    cout << "Difference: ";
    diff.display();
    cout << endl;

    return 0;
}
