#include <bits/stdc++.h>
using namespace std;

int lowerBound(const vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    while(left < right) {
        int mid = left + (right - left) / 2;
        if(nums[mid] > target) {
            right = mid-1;
        }
        else {
            left = mid;
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
    int result = lowerBound(nums, target);
    cout << "Target element: " << target << "\nLower Bound found at index: " << result << endl;
    return 0;
}