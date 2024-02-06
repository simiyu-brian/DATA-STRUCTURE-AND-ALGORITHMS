#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> seen;

    for (int num : nums) {
        // If the current element is already in the set, return true (contains duplicate)
        if (seen.find(num) != seen.end()) {
            return true;
        }

        // Otherwise, add the element to the set
        seen.insert(num);
    }

    // If no duplicates are found, return false
    return false;
}

int main() {
    vector<int> nums1 = {1, 2, 3, 4, 5};
    vector<int> nums2 = {1, 2, 3, 4, 1};

    cout << "Array 1 contains duplicates: " << (containsDuplicate(nums1) ? "true" : "false") << endl;
    cout << "Array 2 contains duplicates: " << (containsDuplicate(nums2) ? "true" : "false") << endl;

    return 0;
}
