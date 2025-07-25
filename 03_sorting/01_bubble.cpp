#include <iostream>
using namespace std;

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; // Unsorted array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Bubble Sort Algorithm
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                // int temp = arr[j];
                // arr[j] = arr[j + 1];
                // arr[j + 1] = temp;
                swap(arr[j],arr[j+1]);
            }
        }
    }

    // Output the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
