#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int summation(vector<int> arr) {
    int sum = 0;
    for (int x : arr) {
        sum += x;
    }
    return sum;
}

int maximum(vector<int> arr) {
    return *max_element(arr.begin(), arr.end());
}

int main() {
    int n;
    cout << "Enter the number of integers: ";
    cin >> n;
}
