#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int arr1[3] = {3, 6, 1};
    int arr2[5] = {5, 2, 11, 16, 9};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int n = size1 + size2;
    int arr3[n];

    int i;
    for (i=0 ; i < size1; i++) {
        arr3[i] = arr1[i];
    }
    for (int j = 0; j < size2; j++) {
        arr3[i + j] = arr2[j];
    }
    sort(arr3, arr3 + size1 + size2);

    cout << "Merged array arr3: ";
    for (int k = 0; k < n; k++) {
        cout << arr3[k] << " ";
    }
    cout << endl;
    
    return 0;
}