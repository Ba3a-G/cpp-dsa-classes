#include <iostream>
using namespace std;

// What is a struct?
// A struct is a user-defined data type that groups together related data of different data types.

// How to define a struct?
// struct <struct_name> {
//     <data_type> <member_name>;
//     <data_type> <member_name>;
//     ...
// };

// How to initialize a struct variable?
// <struct_name> <variable_name> = {<value1>, <value2>, ...};

// How to declare a struct variable?
// <struct_name> <variable_name>;

// How to access members of a struct?
// <variable_name>.<member_name>

// A sample struct for students
struct Students {
    string name;
    int roll;
    float marks;
};

int main() {

    // Declaring a struct variable and initializing it with values one by one
    Students aryan;
    aryan.name = "Aryan Kumar";
    aryan.roll = 1;
    aryan.marks = 99.9f;

    // Declaring a struct variable and initializing it with values in one line
    Students shawn = {"Shawn", 2, 90.0f};
}