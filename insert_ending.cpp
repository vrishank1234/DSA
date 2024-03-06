#include <iostream>
using namespace std;

void insertAtEnd(int value, int& size, int arr[]) {
    arr[size] = value;
    ++size;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter the element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int val;
    cout << "Enter the value you want to insert at the end: ";
    cin >> val;

    insertAtEnd(val, n, arr);

    cout << "Array after insertion at the end: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
