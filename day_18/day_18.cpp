//Question1 
#include <iostream>
#include <tuple>   // For using std::tuple
#include <string>  // For using std::string

class Person {
private:
    std::string firstName;
    std::string lastName;
    int age;

public:
    
    Person(std::string fName, std::string lName, int a) 
        : firstName(fName), lastName(lName), age(a) {}


    std::string getFullName() const {
        return firstName + " " + lastName;
    }
    std::tuple<std::string, std::string, int> getDetails() const {
        return std::make_tuple(firstName, lastName, age);
    }
};

int main() {
    Person person("John", "Doe", 25);
    std::cout << "Full Name: " << person.getFullName() << std::endl;
    auto[firstName, lastName, age] = person.getDetails();
    std::cout << "First Name: " << firstName << "\n";
    std::cout << "Last Name: " << lastName << "\n";
    std::cout << "Age: " << age << "\n";

    return 0;
}
