#include<iostream>
using namespace std;

int lastOcc(int arr[], int size, int key) {
    int start, end, mid, index;
    start = 0;
    end = size - 1;
    index = -1;
    
    while (start <= end) {
        mid = (end + start) / 2;
        if (arr[mid] == key) {
            index = mid;
            start = mid + 1;
        } else if (arr[mid] > key) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    
    return index;
};

int main() {
    int evenArr[6] = {2, 3, 3, 6, 3, 8};
    int oddArr[5] = {4, 4, 8, 9, 11};
    cout << lastOcc(evenArr, 6, 3) << endl;
    cout << lastOcc(oddArr, 5, 4) << endl;
    return 0;
};