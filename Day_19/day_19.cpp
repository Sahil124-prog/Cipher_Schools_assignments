//Question1
#include <iostream>
#include <fstream>   // For file handling
#include <string>    // For using std::string

int main() {
    std::string filename = "details.txt";
    std::ofstream outFile(filename);    
    if (outFile.is_open()) {
        outFile << "First Name: John\n";
        outFile << "Last Name: Doe\n";
        outFile << "Age: 25\n";
        outFile << "Occupation: Software Developer\n";
        
        outFile.close();  
    } else {
        std::cerr << "Error opening the file for writing!" << std::endl;
        return 1;
    }
    std::ifstream inFile(filename);
    std::string line;
    
    if (inFile.is_open()) {
        std::cout << "File Contents:\n";
        while (std::getline(inFile, line)) {
            std::cout << line << std::endl;
        }
        inFile.close();  
    } else {
        std::cerr << "Error opening the file for reading!" << std::endl;
        return 1;
    }
    return 0;
}
//Question2
#include <iostream>
#include <fstream>   // For file handling
#include <string>    // For using std::string

int main() {
    std::string filename = "example.txt";
    std::ifstream inFile(filename);
    std::string line;
    if (inFile.is_open()) {
        std::cout << "Reading from file: " << filename << std::endl;
        while (std::getline(inFile, line)) {
            std::cout << line << std::endl;
        }
        inFile.close();
    } else {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return 1;
    }
    return 0;
}

