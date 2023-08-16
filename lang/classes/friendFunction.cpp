#include <iostream>
using namespace std;

class Box {
   int width;
   int length;

   public:
      void setDimension( int wid, int len ) {
         width = wid;
         length = len;
      }
      friend void printDimension( Box box );

};

void printDimension( Box box ) {
   cout << "Width of box : " << box.width << endl;
   cout << "Length of box : " << box.length << endl;
}

//////////////////////////////////////////////////////////////////////////

class ComplexNo{
   int a, b;

   public:
      void init(int real, int imag) {
         a = real;
         b = imag;
      }

      void print() {
         cout << "The number is: " << a << "+" << b << "j." << endl;
      }

      friend ComplexNo add(ComplexNo, ComplexNo);
};

ComplexNo add(ComplexNo num1, ComplexNo num2) {
   ComplexNo sum;
   sum.init(num1.a + num2.a, num1.b+num2.b);
   return sum;
};

int main() {
    ComplexNo num1, num2, sum;
    num1.init(3, 4);
    num2.init(1, 2);
    sum = add(num1, num2);
    sum.print();
    return 0;
};