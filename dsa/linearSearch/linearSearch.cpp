#include <iostream>
using namespace std;

bool linearSearch(int arr[], int key, int size) {
    for (int i=0; i<size; i++) {
        if (arr[i] == key) {
            return true;
        };
    };
    return false;
};

int main() {
    int size, arr[100], key;
    cout << "Enter the array size: ";
    cin >> size;

    cout << "Enter the array elements:" << endl;
    for (int i=0; i<size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the key: ";
    cin >> key;

    linearSearch(arr, key, size) ? cout << "Key Found" << endl : cout << "Key not found" << endl;
}