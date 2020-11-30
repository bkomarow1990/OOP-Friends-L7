#pragma once
#include <iostream>
using namespace std;
class Point
{
public:
	Point(int x = 0, int y = 0)
		:x(x), y(y) 
	{}
	void print()const {
		cout << "(" << x<<","<<y<<")"<<endl;
	}
	void setX(const int& x) {
		this->x = x;
	}
	void setY(const int& y) {
		this->y = y;
	}
private:
	int x, y;
	friend double distance(const Point& p1, const Point& p2);
	friend class Rectangle;
	friend Point operator +(const Point& one, const Point& two);
	friend Point operator *(const Point& one, int mult);
	friend ostream& operator <<(ostream& out, const Point& point);
	friend istream& operator >>(istream& in, Point& point);
};

// friend can be :
// global func 
inline double distance(const Point& p1, const Point& p2) {
	return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}
inline Point operator +(const Point& one, const Point& two) {
	return Point(one.x+two.x, one.y+two.y);
}
// whole other class, 
// some method
inline Point operator*(const Point& one, int mult) {
	return Point(one.x * mult, one.y * mult);
}

inline ostream& operator<<(ostream& out, const Point& point)
{
	out << "X: " << point.x << "\tY: " << point.y << endl;
	return out;
}

inline istream& operator>>(istream& in, Point& point)
{
	in >> point.x >> point.y;
	return in;
}

