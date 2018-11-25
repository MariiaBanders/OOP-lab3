#include <iostream>
#include <cmath>
#include <string>
#include "LongInt.h"


void longint :: readnumber(const string &s)
{
	int length = s.length();
	size_number = 0;

	for (int  i = 0; i < length; ++i)
	{
		number[i] = int (s[length - i - 1])-48;
		size_number += 1;
	}
}

int longint :: biggerone(longint a, longint b)
{
	int k = 3; // числа однакової довжини

	int length = a.size_number;
	if (a.size_number > b.size_number)
	{
		length = a.size_number;
		k = 1; // перше число довше
	}
	else
		if (b.size_number > a.size_number)
		{
			length = b.size_number;
			k = 2; // друге число довше
		}
		else // однакові за довжиною, зрівнюємо по розрядах

			for (int ix = 0; ix < length;) // порівнюємо розряди
			{
				if (a.number[ix] > b.number[ix]) // якщо розряд першого більший
				{
					k = 1; // перше число більше
					break; // вихід у вікно
				}

				if (a,number[ix] < b.number[ix]) // якщо розряд другого більший
				{
					k = 2; // друге число більше
					break; // вихід у вікно
				}
			} 

	return k;
}



longint  longint::sum(longint b)
{
	longint c;
	c.size_number = 0;

	if (size_number > b.size_number)
		c.size_number = size_number + 1;
	else c.size_number = b.size_number + 1;

	for (int ix = 0; ix < c.size_number; ++ix)
	{
		c.number[ix] += b.number[ix] + number[ix];
		c.number[ix + 1] += c.number[ix] / 10;
		c.number[ix] %= 10;
	}

	if (c.number[c.size_number - 1] == 0)
		--c.size_number;

	return c;
}

longint longint::difference(longint x, longint y, int length)
{
	longint z;
	z.size_number = 0;

	for (int ix = 0; ix < (length - 1); ++ix)
	{
		if (ix < length - 1) // якщо розряд не перший
		{
			--x.number[ix + 1];
			z.number[ix] += 10 + x.number[ix];
		}
		else
			z.number[ix] += x.number[ix];

		z.number[ix] -= y.number[ix];

		if (z.number[ix] / 10 > 0)
		{
			++z.number[ix + 1];
			z.number[ix] %= 10;
		}
	}

	z.size_number = x.size_number;

	return z;
}

longint longint::sub(longint b)
{
	longint c;
	c.size_number = 0;

	longint help = *this;

	int k = biggerone(help, b);

	if (k == 3)
	{
		c.size_number = 1;
	}
	else if (k == 1)
		c = difference(help, b, help.size_number);
	else
		c = difference(b, help, b.size_number);

	if (c.number[c.size_number - 1] == 0)
		--c.size_number;

	if (k == 2)
		c.number[c.size_number + 1] = -1;

	return c;
}

longint longint::mul(longint b)
{
	longint c;

	c.size_number = size_number + b.size_number + 1;

	for (int ix = 0; ix < size_number; ++ix)
		for (int jx = 0; jx < b.size_number; ++jx)
			c.number[ix + jx] += number[ix] * b.number[jx];

	for (int ix = 0; ix < c.size_number; ++ix)
	{
		c.number[ix + 1] += c.number[ix] / 10;
		c.number[ix] %= 10;
	}

	while (c.number[c.size_number-1] == 0)
		--c.size_number;

	return c;
}

longint longint::div(longint b)
{
	longint c;
	c.size_number = 0;

	longint help = *this;

	int k = biggerone(help, b);

	if (k != 1)
		c.size_number = 1;
	else 
		while (k == 1)
		{
			k = biggerone(help, b);
			help = difference(help, b, help.size_number);	
		}

	c = help;

	return c;
}


string longint::longint::returnnumber()
{
	string s = "";

	if (number[size_number + 1] == -1)
		s += "-";

	for (int i = 1; i <= size_number; ++i)
	{
		s += to_string(number[size_number - i]);
	}
	return s;
}

