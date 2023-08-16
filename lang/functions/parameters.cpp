#include <iostream>
using namespace std;

void printName(string name = "Aryan") {
    // Default parameter
    cout << "And the name is .... " << name << endl;
}

void printNameAndMarks(string name = "Aryan", int marks = 100) {
    cout << "My name is " << name << " and I got " << marks << " marks." << endl;
}

string fullName(string firstName, string lastName) {
    // A very complex logic to get the full name lol
    return firstName + " " + lastName;
}

int product(int a, int b) {
    return a * b;
}

int maxNum(int a, int b, int c) {
    if (a > b) {
        if (a > c) {
            return a;
        }
        else {
            return c;
        }
    }
    else {
        if (b > c) {
            return b;
        }
        else {
            return c;
        }
    }
}

int minNum(int a, int b, int c) {
    if (a < b) {
        if (a < c) {
            return a;
        }
        else {
            return c;
        }
    }
    else {
        if (b < c) {
            return b;
        }
        else {
            return c;
        }
    }
}



int main() {

}