#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) {
    for(int i =0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] < arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int binarySearch(int arr[], int n, int key) {
    int l = 0, r = n - 1;

    while(l <= r) {
        int mid = (l + r)/2;

        if(arr[mid] == key) return mid;
        else if(arr[mid] < key) r = mid - 1;
        else l = mid + 1;
    }

    return -1;
}

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++) cin >> arr[i];

    bubbleSort(arr, n);

    cout << "Sorted array (Descending): ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    int key;
    while(1) {
        cout << "Enter key to search: ";
        cin >> key;

        int idx = binarySearch(arr, n, key);

        if(idx != -1) {
            cout << "You have found the key value at index " << idx << "\n";
            // break;
        } 
        else {
            cout << "Not found\n";
        }
        cout << "press 0 to exit or press 1 to continue: ";
        int f ; cin >> f;
        if (f == 0) break;
    }

    return 0;
}
