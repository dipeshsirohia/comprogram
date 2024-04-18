#include <iostream>
using namespace std;

class Rectangle {
public:
  int width;
  int height;
  Rectangle(int w, int h) {  // constructor with parameters
    width = w;
    height = h;
    cout << "Rectangle created with width = " << width << " and height = " << height << endl;
  }
};

int main() {
  Rectangle rect(5, 10);  // create object of Rectangle with width = 5 and height = 10
  return 0;
}
