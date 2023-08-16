#include <iostream>
using namespace std;

/*
What is Function Overloading?
Function overloading is a feature in C++ where two or more functions can have the same name but different parameters.
The compiler automatically selects the correct function based on the number of parameters, types of parameters and the order of the parameters.
It is also called Compile Time Polymorphism.
*/

float calculate(float a, float b) {
    return a + b;
}

int calculate(int a, int b) {
    return a + b;
}

int calculate(int a, int b, int c) {
    return a * b * c;
}

int main() {
    cout << calculate(1, 2) << endl;        // Calls the second calculate function because the parameters are two integers
    cout << calculate(1.0f, 2.0f) << endl;  // Calls the first calculate function because the parameters are two floats
    cout << calculate(1, 2, 3) << endl;     // Calls the third calculate function because the parameters are three integers
    return 0;
}