//Question1 
#include <iostream>
using namespace std;

int main(){
    int n1;
    cout << "Enter a number:";
    cin >> n1;
    if(n1%2 == 0){
        cout << "Even " << endl;
    } else {
        cout << "Odd" << (float) n1/n2 << endl;
    }
    return 0;
}
//Question 2
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Define a string
    string str ;
    cin>>str;
    reverse(str.begin(), str.end());
    cout << "Reversed string: " << str << endl;
    return 0;
}
// Question 3
#include <iostream>
using namespace std;
void countVowelsAndConsonants(const char str[]) {
    int vowels = 0;
    int consonants = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
        else if (ch >= 'a' && ch <= 'z') {
            consonants++;
        }
    }
    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;
}
int main() {
    char str[100];
    cout << "Enter a string (lowercase letters only): ";
    cin >> str;
    countVowelsAndConsonants(str);
    return 0;
}