#include <bits/stdc++.h>
using namespace std;

int upperBound(const vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    while(left < right) {
        int mid = left + (right - left) / 2;
        if(nums[mid] > target) {
            right = mid;
        }
        else {
            left = mid+1;
        }
    }
    return left;
}

void printArray(const vector<int>& nums) {
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums = {11, 12, 22, 25, 34, 64, 90};
    int target = 25;
    cout << "Array: ";
    printArray(nums);
    int result = upperBound(nums, target);
    cout << "Target element: " << target << "\nUpper Bound found at index: " << result << endl;
    return 0;
}