#include<iostream>
using namespace std;


// using for loop
void reverseArray(int arr[], int size) {
    int temp;
    for (int i=0; i<size/2; i++) {
        temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    };
};

// using while loop
void reverseArrayWhile(int arr[], int size) {
    int start = 0;
    int end = size -1;

    while (start<end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int size) {
    for (int i=0; i<size; i++) {
        cout << arr[i];
    };
    cout << endl;
}


int main() {
    int array[100], size;
    cout << "Enter the size of your array: ";
    cin >> size;

    for (int i=0; i<size; i++) {
        cin >> array[i];
    }

    reverseArray(array, size);
    printArray(array, size);
    reverseArrayWhile(array, size);
    printArray(array, size);
};