#include <iostream>
using namespace std;

int main() {
    // Basic data types in C++
    int sampleInteger = 19;                     // int takes up 4 bytes
    double sampleDouble = 3.14;                 // double takes up 8 bytes
    float sampleFloat = 3.14;                   // float takes up 4 bytes
    char sampleChar = 'a';                      // char takes up 1 byte
    string sampleString = "Hello, World!";      // string's size depends on the length of the string
    bool sampleBool = true;                     // bool takes up 1 byte

    cout << sampleInteger << endl;
    cout << sampleDouble << endl;
    cout << sampleFloat << endl;
    cout << sampleChar << endl;
    cout << sampleString << endl;
    cout << sampleBool << endl;

    return 0;
}