//Question1
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter target"<<endl;
    int key;
    cin>>key;
    bool x =false;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            x=true;
        }
    }
    if(x==true) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
//Question2
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter target"<<endl;
    int key;
    cin>>key;
    bool x =false;
    int y=0;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            x=true;
            y=i;
        }
    }
    if(x==true){
        cout<<y+1<<endl;
    }
    else cout<<"-1"<<endl;
    return 0;
}