//Question1 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n; //key
    int arr[10][10];
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cin>>arr[i][j];
        }
    }
    bool found = false;
    for(int i=0;i<10 && !found;i++){
        for(int j=0;j<10;j++){
            if(arr[i][j]==n){
                found=true;
                break;
            }
        }
    }
    if(found) cout<<"Yes"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
//Question 2
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n; //key
    int arr[10][10];
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cin>>arr[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            sum+=arr[i][j];
        }
    }
    cout<<sum<<endl;
    return 0;
}
