#pragma once
#include "Point.h"
#include <iostream>
using namespace std;
class Rectangle
{
public:
	Rectangle(const Point& leftTop, const Point& rightBottom)
		: leftTop(leftTop), rightBottom(rightBottom) {
	
	}
	Rectangle(int x1,int y1,int x2,int y2)
		:leftTop(x1,y1),rightBottom(x1,y2)
	{}
	Rectangle() = default;
	void print()const {
		cout << "Rectangle" << endl;
		cout << "Left Top: " ;
		leftTop.print();
		cout << "Right Bottom: " ;
		rightBottom.print();
	}
	int area()const;
	void draw()const {
		for (int i = 0; i < abs(rightBottom.x-rightBottom.y); i++)
		{
			cout << "-";
		}
	}
private:
	Point leftTop, rightBottom;

};
inline int Rectangle::area() const
{
	return abs(rightBottom.x - leftTop.x)*abs(rightBottom.y-leftTop.y);
}
