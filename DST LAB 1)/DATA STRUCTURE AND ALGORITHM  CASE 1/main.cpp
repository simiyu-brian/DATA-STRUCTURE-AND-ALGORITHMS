#include <iostream>

// Function to calculate the sum of elements in an array
int summation(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    return sum;
}

// Function to find the maximum element in an array
int maximum(int arr[], int n) {
    if (n <= 0) {
        std::cerr << "Array length must be greater than 0." << std::endl;
        return -1; // Assuming -1 represents an error in this case
    }

    int maxVal = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int main() {
    int n;

    // Get the length of the array from the user
    std::cout << "Enter the length of the array (n): ";
    std::cin >> n;

    // Check for valid input
    if (n < 0) {
        std::cerr << "Invalid array length. Please enter a non-negative value." << std::endl;
        return 1; // Exiting with an error code
    }

    // Declare an array of length n
    int* arr = new int[n];

    // Allow the user to enter n integers and store them in the array
    std::cout << "Enter " << n << " integers, separated by spaces:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    // Call the summation function and display the result
    int sum = summation(arr, n);
    std::cout << "Sum of the integers: " << sum << std::endl;

    // Call the maximum function and display the result
    int maxVal = maximum(arr, n);
    if (maxVal != -1) {
        std::cout << "Maximum integer: " << maxVal << std::endl;
    }

    // Clean up allocated memory
    delete[] arr;

    return 0; // Exiting without errors
}
