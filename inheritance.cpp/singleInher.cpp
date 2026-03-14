
//single inheritance example in C++ 
//shows how a derived class can inherit properties and behaviors from a base class, and how to use constructors and destructors in both classes.
//the protected member are in use by the derived class and not accessible outside the class hierarchy.private members are not accessible to the derived class, while public members are accessible to both the derived class and outside the class hierarchy.
//private members of derived class are accessed by setter and getter in derived class
//and can be shown in int only and only if they are get by using some function
#include <iostream>
using namespace std;
class rectangle {
protected:
    int length;
    int width;
public:
	rectangle(int l, int w) :length(l), width(w) {} //constructor
    int area() {
        return length * width;
	}
    int perimeter() {
        return 2 * (length + width);
    }
	~rectangle() {} //destructor
};
class cuboid :public rectangle {
    double height;
public:
    cuboid(int l, int w, double h) :rectangle(l, w), height(h) {} //constructor
void setHeight(double h) {
        height = h;
}
double getHeight() {
    return height;
}
    double volume() {
        return area() * height;
    }
	~cuboid() {} 

};
int main()
{
	cuboid c(5, 3, 4.5);
	cout << "Area of rectangle: " << c.area() << endl;
	cout << "Perimeter of rectangle: " << c.perimeter() << endl;
	cout << "Volume of cuboid: " << c.volume() << endl;
	return 0;

}
// This program defines a base class `rectangle` with member variables for length and width, and member functions to calculate the area and perimeter.
// The `cuboid` class inherits from `rectangle` and adds a member variable for height, along with a function to calculate the volume.

// In the `main` function, an instance of `cuboid` is created, and the area, perimeter, and volume are calculated and displayed.

/*expected output :
Area of rectangle: 15
Perimeter of rectangle: 16
Volume of cuboid: 67.5
*/


