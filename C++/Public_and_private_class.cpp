#include <iostream>
 
using namespace std;
 
class home {
 
   private:
 
    double length;
 
    double breadth;
 
    double height;
 
   public:
 
    // function to initialize private variables
 
    void getData(double len, double brth, double hgt) {
 
        length = len;
 
        breadth = brth;
 
        height = hgt;
 
    }
 
 
    double calArea() {
 
        return length * breadth;
 
    }
 
    double calVolume() {
 
        return length * breadth * height;
 
    }
 
};
 
 
int main() {
 
    // create object of home1 class
 
    home home1;
 
    // pass the values of private variables as arguments
 
    home1.getData(42.5, 30.8, 19.2);
 
 
    cout << "Area of home =  " << home1.calArea() << endl;
 
    cout << "Volume of home1 =  " << home1.calVolume() << endl;
 
    return 0;
 
}
 