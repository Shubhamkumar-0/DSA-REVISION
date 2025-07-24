#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 3, 8, 4, 2}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int target;

    cout << "Enter the number to search: ";
    cin >> target;

    int index = -1; // Initialize index to -1 (not found)

    // Perform linear search
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            index = i; // Update index if the target is found
            break; // Exit the loop once the target is found
        }
    }

    // Output the result
    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
