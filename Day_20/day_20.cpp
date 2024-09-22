//Question1
#include <iostream>
using namespace std;
int main(){
int arr[10][10];
int r, c;
cin >> r >> c;
for (int i = 0; i < r; i++){
for (int j=0; j < c; j++){
cin >> arr[i][j];
}
}
for (int i = 0; i < c; i++){
for (int j=1; j = 0; j--){ cout << arr[j][i] << " ";
}
cout << endl;
}
return 0;
}
//Question2 
#include<iostream>
using namespace std;
int main(){
int arr[10] [10];
int r, c;
cin >> r >> c;
for (int i = 0; i < r; i++)
for (int j = 0; j < c; j++){
cin >> arr[i][j];
for (int i = 0; i < r; i++)
for (int j = 0; j < c; j++)
for (int k = 0; k < r; k++)
for (int l = 0; 1 < c; l++) if (arr[i][j] < arr[k][l])
swap(arr[i][j], arr[k][l]);
for (int i = 0; i < r; i++){
for (int j = 0; j < c; j++)
cout << arr[i][j] << " ";
cout << endl;
}
return 0;
}