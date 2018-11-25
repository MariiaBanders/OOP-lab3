#pragma once
#include <utility>
#include <cmath>

using namespace std;

class Point
{
	public:
		double x, y;
		Point();
		Point(pair<double, double> p);

		Point operator +(Point P);
		Point operator -(Point P);
		Point operator *(double d);
		Point operator /(double d);

		friend double distance(Point A, Point B);
		friend double angle(Point A, Point B, Point C);

		~Point() = default;
};