#include <iostream>
using namespace std;

// What are Reference variables?
// Reference variables are aliases for other variables.

int& test2(int n) {
    int &ref = n;
    return ref;
}

int main() {
    int x = 10;
    int y = test2(x);
    cout << "x = " << y << endl;
}