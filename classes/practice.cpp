#include <iostream>
using namespace std;

class Rectangle {
    int length, width;

    public:
        void setAttribs(int l, int b) {
            length = l;
            width = b;
        };
    friend int area(Rectangle);  
};

int area(Rectangle shape1) {
    return shape1.length * shape1.width;
};

int main() {
    Rectangle shape1;
    shape1.setAttribs(4, 10);
    cout << area(shape1) << endl;
};