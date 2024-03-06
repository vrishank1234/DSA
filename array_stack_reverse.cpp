#include <iostream>
using namespace std;

void reverseArray(int arr[], int n) {
    int stack[n];
    int top = -1;

    for (int i = 0; i < n; i++) {
        stack[++top] = arr[i];
    }

    for (int i = 0; i < n; i++) {
        arr[i] = stack[top--];
    }
}
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements in an array:\n"<<endl;
    for (int i = 0; i < n; i++) {
        cout<<"Enter the "<<i<<"th element : ";
        cin >> arr[i];
    }
    cout << "\nOriginal array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    reverseArray(arr, n);
    cout << "\nReversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}