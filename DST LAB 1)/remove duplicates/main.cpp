#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) {
        return 0;
    }

    // Use two pointers
    int i = 0;

    for (int j = 1; j < nums.size(); ++j) {
        // If the current element is not equal to the previous element, update the array
        if (nums[j] != nums[i]) {
            ++i;
            nums[i] = nums[j];
        }
    }

    // The length of the unique elements is the index i + 1
    return i + 1;
}

int main() {
    vector<int> nums = {1, 1, 2, 2, 2, 3, 4, 4, 5};
    int length = removeDuplicates(nums);

    cout << "Length of unique elements: " << length << endl;
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < length; ++i) {
        cout << nums[i] << " ";
    }

    return 0;
}
