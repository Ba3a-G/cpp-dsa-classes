#include <iostream>
using namespace std;

int squareStarFrame() {
    int length, width;
    cout << "Enter the length and width: ";
    cin >> length >> width;
    for (int i = 0; i < width; i++) {
        cout << "*";
    }
    cout << endl;
    for (int i = 0; i < length - 2; i++) {
        cout << "*";
        for (int j = 0; j < width - 2; j++) {
            cout << " ";
        }
        cout << "*" << endl;
    }
    for (int i = 0; i < width; i++) {
        cout << "*";
    }
    cout << endl;
    return 0;
}

int main() {
    squareStarFrame();
    return 0;
}