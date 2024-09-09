//Question 1
#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int* ptr=&x;
    cout<<x<<endl;
    cout<<*ptr<<endl;
    return 0;
}
//Question2
#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    int* ptr=&arr[0];
   for(int i=0;i<x;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    return 0;
}
//Question 3
#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int* ptr=&x;
    int** ptr1= &ptr;
    cout<<x<<endl;
    cout<<*ptr<<endl;
    cout<<**ptr1<<endl;
    return 0;
}
