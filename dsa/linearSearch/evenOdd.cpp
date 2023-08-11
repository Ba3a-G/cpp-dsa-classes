#include <iostream>
using namespace std;

bool hasEven(int arr[], int size) {
    for (int i=0; i<size; i++) {
        if (arr[i] % 2 == 0) {
            return true;
        };
    };
    return false;
};

bool hasOdd(int arr[], int size) {
    for (int i=0; i<size; i++) {
        if (arr[i] % 2 != 0) {
            return true;
        };
    };
    return false;
};

string hasEvenOdd(int arr[], int size) {
    bool even = false;
    bool odd = false;

    for (int i=0; i<size; i++) {
        if (arr[i] % 2 == 0) {
            even = true;
        } else {
            odd = true;
        };

        if (even && odd) {
            return "both even and odd";
        };
    };

    if (even) {
        return "even only";
    } else {
        return "odd only";
    }
};

int main() {
    int array[100], size;
    cout << "Enter the size of your array: ";
    cin >> size;

    for (int i=0; i<size; i++) {
        cin >> array[i];
    }

    cout << "The array has numbers that are " << hasEvenOdd(array, size) << endl;

};