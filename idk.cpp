#include <iostream>

using namespace std;

void rotateArrayWithQueue(int arr[], int size, int positions) {
    // Validate positions to be within array size
    positions = positions % size;

    int temp[size];

    // Copy elements to temporary array shifted by positions
    for (int i = 0; i < size; ++i) {
        temp[(i + size - positions) % size] = arr[i];
    }

    // Copy back to the original array
    for (int i = 0; i < size; ++i) {
        arr[i] = temp[i];
    }
}

int main() {
    // User input for array
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;

    int originalArray[size];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> originalArray[i];
    }

    // User input for the number of positions to rotate
    int positionsToRotate;
    cout << "Enter the number of positions to rotate: ";
    cin >> positionsToRotate;

    rotateArrayWithQueue(originalArray, size, positionsToRotate);

    cout << "Rotated Array: ";
    for (int i = 0; i < size; ++i) {
        cout << originalArray[i] << " ";
    }
    cout << endl;

    return 0;
}
