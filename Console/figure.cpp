#include <iostream>
#include "figure.h"

using namespace std;

void Figure::set(int x, int y, int vx, int vy)
{
	this->x = x;
	this->y = y;
	this->vx = vx;
	this->vy = vy;
}

Figure::Figure()
{
}

Rectangle::Rectangle()
{
	this->k = 3;
}

int Rectangle::getXLeft()
{
	return x;
}

int Rectangle::getXRight()
{
	return x + k;
}

int Rectangle::getYTop()
{
	return y;
}

int Rectangle::getYBottom()
{
	return y + k;
}


void Rectangle::draw()
{
		for (int i = 0; i < k; ++i)
		{
			for (int j = 0; j < k; ++j)
			{
				printat(x+i, y+j, "o");
			}
		}
}

void Rectangle::erase()
{
	for (int i = 0; i < k; ++i)
	{
		for (int j = 0; j < k; ++j)
		{
			printat(x+i, y+j, " ");
		}
	}
}

Circle::Circle()
{
	this->k = 6;
}

int Circle::getXLeft()
{
	return x;
}

int Circle::getXRight()
{
	return x + k;
}

int Circle::getYTop()
{
	return y;
}

int Circle::getYBottom()
{
	return y + k;
}


void Circle::draw()
{
	printat(x + 2, y, "o");
	printat(x + 3, y, "o");
	printat(x + 2, y + 5, "o");
	printat(x + 3, y + 5, "o");
	printat(x, y + 2, "o");
	printat(x, y + 3, "o");
	printat(x + 5, y + 2, "o");
	printat(x + 5, y + 3, "o");
	for (int i = 1; i <= 4; ++i)
	{
		for (int j = 1; j <= 4; ++j)
		{
			printat(x + i, y + j, "o");
		}
	}

}

void Circle::erase()
{
	for (int i = 0; i < k; ++i)
	{
		for (int j = 0; j < k; ++j)
		{
			printat(x + i, y + j, " ");
		}
	}
}
