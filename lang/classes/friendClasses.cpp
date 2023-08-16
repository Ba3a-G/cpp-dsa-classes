#include <iostream>
using namespace std;

class Complex {
    int real, imag;

    public:
    void init(int a, int b) {
        real = a;
        imag = b;
    };

    void print() {
        cout << "The number is: " << real << ", " << imag << endl;
    };

    friend class Calculator;
};

class Calculator {
    public:
    int sumReal(Complex num1, Complex num2) {
        return num1.real + num2.real;
    };

    friend class Complex;
};

int main() {
    Complex num1, num2;
    num1.init(1, 3);
    num2.init(5, 7);

    Calculator calc;
    cout << calc.sumReal(num1, num2) << endl;
};