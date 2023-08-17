#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start, end, mid;
    start = 0;
    end = size - 1;
    
    while (start <= end) {
        mid = (end + start) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] > key) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    
    return -1;
}

int main()
{
    int evenArr[6] = {2, 3, 5, 6, 7, 8};
    int oddArr[5] = {4, 5, 8, 9, 11};
    cout << binarySearch(evenArr, 6, 3) << endl;
    return 0;
}