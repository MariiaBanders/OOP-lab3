#include "Point.h"

Point::Point()
{
	x = 0;
	y = 0;
}

Point::Point(pair<double, double> p)
{
	x = p.first;
	y = p.second;
}

Point Point::operator +(Point P)
{
	Point Res;
	Res.x = x + P.x;
	Res.y = y + P.y;
	return Res;
}

Point Point::operator -(Point P)
{
	Point Res;
	Res.x = x - P.x;
	Res.y = y - P.y;
	return Res;
}

Point Point::operator *(double d)
{
	Point Res;
	Res.x = x*d;
	Res.y = y*d;
	return Res;
}

Point Point::operator /(double d)
{
	Point Res;
	Res.x = x/d;
	Res.y = y/d;
	return Res;
}

double distance(Point A, Point B)
{
	return sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y));
}

double angle(Point A, Point B, Point C)
{
	return 0; // надо подумать что тут нужно будет выводить вообще
}