/*Question1: 
Ques 1. Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
Sample :- Input: nums = [2,2,1]
*/ 
#include <iostream>
#include <vector>
using namespace std;

int findSingleElement(vector<int>& nums) {
    int result = 0;
    for (int i = 0; i < nums.size(); i++) {
        result ^= nums[i]; // XOR operation
    }
    return result;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int singleElement = findSingleElement(nums);
    cout << "The single element is: " << singleElement << endl;
    
    return 0;
}
