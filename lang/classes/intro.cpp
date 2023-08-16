#include <iostream>
using namespace std;

// What are classes?
// A class is a user-defined data type that groups together related data of different data types and functions.

// How to define a class?
// class <class_name> {
//     <access_specifier>:
//         <data_type> <member_name>;
//         <data_type> <member_name>;
//         ...
//     <access_specifier>:
//         <return_type> <function_name>(<parameters>) {
//             <function_body>
//         }
//         <return_type> <function_name>(<parameters>);
//         ...
// };

// How to initialize a class variable?
// <class_name> <variable_name> = {<value1>, <value2>, ...};

// How to declare a class variable?
// <class_name> <variable_name>;

// What are access specifiers?
// Access specifiers are keywords that define the accessibility of the members of a class.
// There are three access specifiers in C++:
// 1. public: All the members declared under public can be accessed by anyone.
// 2. private: All the members declared under private can only be accessed by the members of the same class.
// 3. protected: All the members declared under protected can be accessed by the members of the same class and the members of the derived class.

// What are the differences between a struct and a class?
// 1. By default, all the members of a struct are public whereas, by default, all the members of a class are private.
// 2. In a struct, the members are accessed using the dot (.) operator whereas, in a class, the members are accessed using the arrow (->) operator.
// 3. In a struct, the members are public by default whereas, in a class, the members are private by default.

class Pet {
    public:
        string name;
        string breed;
        int lifespan;
        int age;

        bool isYoung(int age) {
            return age < static_cast <float>(lifespan)/10;
        };
};

int main() {
    Pet cat = {"Meow", "Persian", 10, 3};

}