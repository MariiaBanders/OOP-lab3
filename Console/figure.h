#include "conslib.h"

class Figure
{
	public:

		int x;
		int y;
		int vx;
		int vy;
	
		void set(int x, int y, int vx, int vy);

		virtual int getXLeft() = 0;
		virtual int getXRight() = 0;
		virtual int getYTop() = 0;
		virtual int getYBottom() = 0;
	
		virtual void draw() = 0;
		virtual void erase() = 0;

		Figure();
};

class Rectangle: public Figure
{
private:
	
	int k;

public:

	int getXLeft();
	int getXRight();
	int getYTop();
	int getYBottom();

	void draw();
	void erase();

	Rectangle();
};

class Circle : public Figure
{
private:

	int k;

public:

	int getXLeft();
	int getXRight();
	int getYTop();
	int getYBottom();

	void draw();
	void erase();

	Circle();
};