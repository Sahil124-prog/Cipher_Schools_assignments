//Question1
#include<bits/stdc++.h>
using namespace std;
void findMax(const int arr[],int size){
        int max=INT_MIN;
        for(int i=0;i<size;i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        cout<<max<<endl;
        return;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    findMax(arr,n);
    return 0;
}
//Question2
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string &str1){
    int left = 0;
    int right = str1.length() - 1;

    while(left < right){
        while(left < right && ! isalpha(str1[left]) && !isdigit(str1[left])){
            left++;
        }
        while(left < right && ! isalpha(str1[right]) && !isdigit(str1[right])){
            right--;
        }

        if(tolower(str1[left]) != tolower(str1[right])){
            return false;
        }

        left++;
        right--;
    }

    return true;
}
int main(){

    string str1 = "A man, a plan, a canal, Panama";

    cout << isPalindrome(str1);


    return 0;
}