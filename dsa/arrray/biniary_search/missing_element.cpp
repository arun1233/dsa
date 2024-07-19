#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int missing_element(vector<int>& a) {
    sort(a.begin(), a.end()); // Ensure the array is sorted
    int l = 0, r = a.size() - 1, ans = 0;
    
    while (r >= l) {
        int mid = l + (r - l) / 2;
        if (a[mid] == mid + 1) {
            l = mid + 1;
        } else {
            ans = mid + 1;
            r = mid - 1;
        }
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr;
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cout << "Finding the missing element...\n";
    int result = missing_element(arr);
    cout << "The missing element in the input array is: " << result << "\n";
    return 0;
}
