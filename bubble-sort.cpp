#include<iostream>
using namespace std;

void print(int arr[], int n) {  // Function to print an array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

/*
Implementation of Bubble Sort
*/

void bubble_sort(int arr[], int n) {  // Time Complexity: O(n^2)
    for (int i = 0; i < n; i++) {  // Traverse through all array elements
        for (int j = 0; j < n - i - 1; j++) {  // Last i elements are already in place
            if (arr[j] > arr[j + 1]) {  // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


int main() {


    int arr[] = {5, 4, 3, 2, 1, 7, 0, 8, -2, 6, -2, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Bubble Sort
    bubble_sort(arr, n);
    print(arr, n);

    return 0;
}