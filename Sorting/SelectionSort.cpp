#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (nums[j] < nums[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(nums[i], nums[minIndex]);
        }
    }
}

void printArray(const vector<int>& nums) {
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums = {64, 34, 25, 12, 22, 11, 90};
    cout << "Original array: ";
    printArray(nums);
    selectionSort(nums);
    cout << "Sorted array: ";
    printArray(nums);
    return 0;
}