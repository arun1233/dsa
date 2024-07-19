#include<iostream>
#include<vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int ans = 0;

    // XOR all numbers from 0 to n
    for (int i = 0; i <= nums.size(); i++) {
        ans ^= i;
    }

    // XOR all elements in the array
    for (int i = 0; i < nums.size(); i++) {
        ans ^= nums[i];
    }

    // The result is the missing number
    return ans;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << "Finding the missing element...\n";
    int result = missingNumber(nums);
    cout << "The missing element in the input array is: " << result << "\n";
    return 0;
}
