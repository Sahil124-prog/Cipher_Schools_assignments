//1Q
// #include<iostream>
// using namespace std;
// int main(){
//     string s,s1;
//     cout<<"Enter the first string"<<endl;
//     cin>>s;
//     cout<<"Enter the second string"<<endl;
//     cin>>s1;
//     cout<<s+s1;
//     return 0;
// }
//2Q
#include<iostream>
using namespace std;
int main(){
    int sum=0;
    for(int i=1;i<=5;i++){
        int n;
        cout<<"Enter grade "<<i<<": ";
        cin>>n;
        sum+=n;
        cout<<endl;
    }
    float k = (float)sum;
    float z= sum/5;
    cout<<z;
    return 0;
}