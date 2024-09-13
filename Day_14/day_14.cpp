//Question1 
#include<iostream>
using namespace std;
class Car{
    public:
        string model;
        string brandname;
        string engine;
        int seats;
};
int main(){
        Car c;
        c.brandname="BMW";
        c.engine="Turbo";
        c.model="M4";
        c.seats=2;
        cout<<c.brandname<<endl;
        cout<<c.model<<endl;
        cout<<c.engine<<endl;
        cout<<c.seats<<endl;

}
//Question 2
#include <iostream>
using namespace std;

class Rectangle {
private:
    int width, height;

public:
    
    Rectangle(int w = 0, int h = 0) : width(w), height(h) {}

    Rectangle(const Rectangle &rect) {
        width = rect.width;
        height = rect.height;
    }
    int area() const {
        return width * height;
    }
    void display() const {
        cout << "Width: " << width << ", Height: " << height << endl;
    }
};

int main() {

    Rectangle rect1(10, 5);
    cout << "Original rectangle dimensions: ";
    rect1.display();
    cout << "Area: " << rect1.area() << endl;
    Rectangle rect2 = rect1;
    cout << "Copied rectangle dimensions: ";
    rect2.display();
    cout << "Area: " << rect2.area() << endl;
    return 0;
}
