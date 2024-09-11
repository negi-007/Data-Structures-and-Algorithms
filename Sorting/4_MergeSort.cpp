#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums, int left, int mid, int right) {
    vector<int> L(nums.begin() + left, nums.begin() + mid + 1);
    vector<int> R(nums.begin() + mid + 1, nums.begin() + right + 1);
    int i = 0, j = 0, k = left;
    while (i < L.size() && j < R.size()) {
        nums[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
    }
    while (i < L.size()) nums[k++] = L[i++];
    while (j < R.size()) nums[k++] = R[j++];
}

void mergeSort(vector<int>& nums, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(nums, left, mid);
        mergeSort(nums, mid + 1, right);
        merge(nums, left, mid, right);
    }
}

int main() {
    vector<int> nums = {64, 34, 25, 12, 22, 11, 90};
    cout << "Original array: ";
    for (int num : nums) cout << num << " ";
    cout << endl;
    mergeSort(nums, 0, nums.size() - 1);
    cout << "Sorted array: ";
    for (int num : nums) cout << num << " ";
    cout << endl;
    return 0;
}