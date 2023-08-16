#include<iostream>
using namespace std;

// find the index of target in arr

int linearSearch(int arr[], int n, int target) {
    for (int i=0; i<n; i++) {
        if (arr[i] == target) {
            return i;
        };
    };
    return -1;
};

int main() {
    int array[100], size, target;
    cout << "Enter the size of your array: ";
    cin >> size;

    for (int i=0; i<size; i++) {
        cin >> array[i];
    }

    cout << "Enter the target: ";
    cin >> target;

    int index = linearSearch(array, size, target);
    if (index == -1) {
        cout << "The target is not in the array" << endl;
    } else
        cout << "The target is at index " << index << endl;
};