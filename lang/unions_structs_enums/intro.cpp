#include<iostream>
using namespace std;


// unions can store only one value at a time
union car
{
    char name[20];
    int price;
};

struct bike
{
    char name[20];
    int price;
};

// union vs struct
// union: all members share the same memory location
// struct: all members have their own memory location

// union: memory is allocated only for the largest member
// struct: memory is allocated for all members

// union: only one member can be accessed at a time
// struct: all members can be accessed at a time

// union: used to save memory
// struct: used to store data

enum Meal { breakfast, lunch, dinner };
enum Seasons {
    spring = 10,
    summer = 22, 
    autumn = 31, 
    winter = 47 
};

// enums are user defined data types
// enums are used to assign names to integral constants
// enums make the program more readable and maintainable
// enums take up 4 bytes of memory for each variable inside it

int main() {
    car c1;
    bike b1;

    // cout << "Size of union: " << sizeof(c1) << endl;
    // cout << "Size of struct: " << sizeof(b1) << endl;

    Meal m1 = breakfast;
    cout << m1 << endl;

    return 0;
}