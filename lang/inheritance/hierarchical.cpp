#include <iostream>
using namespace std;

// Hierarchical Inheritance with example

class A {
    public:
        void display() {
            cout << "Class A" << endl;
        }

        void sayHello() {
            cout << "Hello" << endl;
        }
};

class B: public A {
    public:
        void display() {
            cout << "Class B" << endl;
        }
};

class C: public A {
    public:
        void display() {
            cout << "Class C" << endl;
        }
};

int main() {
    B b;
    C c;
    b.sayHello();
    c.sayHello();
    return 0;
}