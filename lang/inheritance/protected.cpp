// Child classes also inherit the protected members of the parent class

#include <iostream>
using namespace std;

// Protected Inheritance with example

class Animal {
    private:
        int randomPrivateData = 10;
    protected:
        string name;
    public:
        void setName(string name) {
            this->name = name;
        }
};

class Dog: public Animal {
    public:
        void displayName() {
            cout << "Dog name: " << name << endl;
        }
};

int main() {
    Dog dog;
    dog.setName("Browny");
    dog.displayName();
    // cout << dog.randomPrivateData << endl; // This will throw an error
    return 0;
}