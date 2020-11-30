#include <iostream>
#include "Point.h"
#include "Rectangle.h"
using namespace std;
int main() {
	/*Point p1(1,1);
	Point p2(0, 0);
	p1.print();
	cout << distance(p1, p2) << endl;
	cout << "__RECTANGLE__" << endl;
	Rectangle rect1;
	rect1.print();
	cout << "Area: "<<rect1.area()<<endl;*/
	Rectangle rect3({ -1,-1 },{4,4}); // ctor with 2 params (Point , Point)
	cout << rect3.area();
	rect3.draw();
	Point point1(1,1);
	Point point2(2,3);
	Point point3 = point1 + point2;
	point3.print();
	Point point4;
	return 0;
}