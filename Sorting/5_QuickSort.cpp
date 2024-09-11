#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& nums, int low, int high) {
    int pivotIndex = low + rand() % (high - low + 1);
    swap(nums[pivotIndex], nums[high]);
    int pivot = nums[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (nums[j] < pivot) {
            swap(nums[++i], nums[j]);
        }
    }
    swap(nums[i + 1], nums[high]);
    return i + 1;
}

void quickSort(vector<int>& nums, int low, int high) {
    if (low < high) {
        int p = partition(nums, low, high);
        quickSort(nums, low, p - 1);
        quickSort(nums, p + 1, high);
    }
}

int main() {
    vector<int> nums = {64, 34, 25, 12, 22, 11, 90};
    cout << "Original array: ";
    for (int num : nums) cout << num << " ";
    cout << endl;
    
    quickSort(nums, 0, nums.size() - 1);
    
    cout << "Sorted array: ";
    for (int num : nums) cout << num << " ";
    cout << endl;
    
    return 0;
}