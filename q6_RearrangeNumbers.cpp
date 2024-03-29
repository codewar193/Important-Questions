/*
Program to rearrange positive and negative numbers in an array by moving all   negative numbers to the beginning and positive numbers to the end by   maintaining the order of appearance of elements in the array.
•  Input: 1 -1 2 -2 3 -3
•  Output: -1 -2 -3 1 2 3
*/
// TC= O(n)
// SC= O(1)

#include <iostream>
using namespace std;

void rearrange_alternate_positions(int arr[], int n) {
    int i, j;
    j = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (i != j) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
    }
}

int main() {
    int n, i;
    cout << "\nEnter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "\nInput the array elements: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "\nOriginal array: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    rearrange_alternate_positions(arr, n);
    cout << "\nRearranged array: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
