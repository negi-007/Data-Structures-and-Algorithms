#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& nums) {
    int n = nums.size();
    for (int i = 1; i < n; i++) {
        int key = nums[i];
        int j = i - 1;
        while (j >= 0 && nums[j] > key) {
            nums[j + 1] = nums[j];
            j--;
        }
        nums[j + 1] = key;
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
    insertionSort(nums);
    cout << "Sorted array: ";
    printArray(nums);
    return 0;
}