// A program to find minimum and maximum element in an array
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <climits>
using namespace std;

int min(int arr[], int size) {
    int min = INT_MAX;
    for (int i=0; i<size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        };
    };
    return min;
};

int max(int arr[], int size) {
    int max = INT_MIN;
    for (int i=0; i<size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        };
    };
    return max;
};

int main() {
    int arr[100], size;
    cout << "Enter size of array: ";
    cin >> size;

    for (int i=0; i<size; i++) {
        cin >> arr[i];
    }

    cout << "Min: " << min(arr, size) << endl;
    cout << "Max: " << max(arr, size) << endl;
}