#include <iostream>
using namespace std;

int main() {
    int sampleInteger;
    double sampleDouble;
    float sampleFloat;
    char sampleChar;
    string sampleString;
    bool sampleBool;

    cout << "Enter an integer: ";
    cin >> sampleInteger;
    cout << "Enter a double: ";
    cin >> sampleDouble;
    cout << "Enter a float: ";
    cin >> sampleFloat;
    cout << "Enter a char: ";
    cin >> sampleChar;
    cout << "Enter a string: ";
    cin >> sampleString;
    cout << "Enter a bool: ";
    cin >> sampleBool;

    cout << "The entered integer was: " << sampleInteger << endl;
    cout << "The entered double was: " << sampleDouble << endl;
    cout << "The entered float was: " << sampleFloat << endl;
    cout << "The entered char was: " << sampleChar << endl;
    cout << "The entered string was: " << sampleString << endl;
    cout << "The entered bool was: " << sampleBool << endl;

    return 0;
}