#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void reverseArray(vector<int>& nums, int start, int end) {
    while (start < end) {
        swap(nums[start], nums[end]);
        ++start;
        --end;
    }
}

void rotate(vector<int>& nums, int k) {
    int n = nums.size();

    // If k is greater than the array size, take the modulo to avoid unnecessary rotations
    k = k % n;

    // Reverse the entire array
    reverseArray(nums, 0, n - 1);

    // Reverse the first k elements
    reverseArray(nums, 0, k - 1);

    // Reverse the remaining elements
    reverseArray(nums, k, n - 1);
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    rotate(nums, k);

    cout << "Array after rotating by " << k << " steps: ";
    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}
