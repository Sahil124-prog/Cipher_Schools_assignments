/*Ques 1 . You are given a binary array. Your task is to find the maximum number of consecutive ones in array.
Input :- arr :[1,1,0,1,1,1]
Output: 3.
Take all the required input from user.*/
#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int maxCount = 0, currentCount = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 1) {
            currentCount++;  
            maxCount = max(maxCount, currentCount); 
        } else {
            currentCount = 0; 
        }
    }

    return maxCount;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the binary array (0 or 1): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = findMaxConsecutiveOnes(arr);
    cout << "The maximum number of consecutive ones is: " << result << endl;

    return 0;
}
