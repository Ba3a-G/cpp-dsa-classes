#include <iostream>
using namespace std;

struct Pet {
    string name;
    string breed;
    int age;
    float ageMultiplier;

    bool isYoung(int age, float ageMultiplier) {
        return age < ageMultiplier * 2;
    };
};

int main() {
    Pet dog = {"Bruno", "Labrador", 5, 2.5f};
    Pet cat = {"Meow", "Persian", 1, 2.5f};

    cout << dog.name << " is " << (dog.isYoung(dog.age, dog.ageMultiplier) ? "young." : "old.") << endl;
 
    return 0;
}