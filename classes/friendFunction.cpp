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

int main() {
    Box box;
    box.setDimension( 10, 20 );
    printDimension( box );
    return 0;
};