#include <bits/stdc++.h>
using namespace std;

int binarySearch(const vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
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
    int result = binarySearch(nums, target);
    if (result != -1) {
        cout << "Target element: " << target << "\nElement found at index: " << result << endl;
    } else {
        cout << "Element not found in array" << endl;
    }
    return 0;
}
