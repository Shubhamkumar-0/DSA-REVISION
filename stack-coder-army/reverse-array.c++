#include <iostream>
using namespace std;

class Stack {
private:
    int* arr;      // Pointer to stack array
    int top;       // Index of the top element
    int capacity;  // Maximum number of elements in the stack

public:
    Stack(int size) {
        arr = new int[size]; // Dynamic array allocation
        capacity = size;
        top = -1;            // Stack is initially empty
    }

    void push(int x) {
        if (top == capacity - 1) {
            cout << "Stack overflow\n";
            return;
        }
        arr[++top] = x; // Increment top and add element
    }

    int pop() {
        if (top == -1) {
            cout << "Stack underflow\n";
            return -1; // Return -1 if stack is empty
        }
        return arr[top--]; // Return top element and decrement top
    }

    bool isEmpty() {
        return top == -1; // Check if stack is empty
    }
};

void reverseArray(int arr[], int n) {
    Stack stack(n); // Create a stack of size n

    // Push all elements of the array onto the stack
    for (int i = 0; i < n; i++) {
        stack.push(arr[i]);
    }

    // Pop the elements from the stack back into the array
    for (int i = 0; i < n; i++) {
        arr[i] = stack.pop();
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverseArray(arr, n);

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
