#define _USE_MATH_DEFINE

#include <iostream>

#include <cmath>
#include "methods.h"

using namespace std;

int gcd(int a, int b, int &x, int &y)
{
	if (b == 0)
	{
		x = 1;
		y = 0;
		return a;
	}

	int x0, y0, g;
	g = gcd(b, a % b, x0, y0);
	y = x0 - (a / b) * y0;
	x = y0;

	return g;
}

void Methods::intervals(int x, int m, int razmer, int arr[]) // подсчет гистаграммы для [x, y]
{
	double k; 
	k = x*(1.0) / m;
	double j = 1.0 / razmer;
	int nomer = int(k / j);
	arr[nomer] += 1;
}

void Methods::normalintervalswow(double x, int razmer, double interval, int start, int finish, int *arr)
{
	double newst = start;
	double newfin = newst + interval;

	for (int j = 0; j < razmer; ++j)
	{
		if ((x <= newfin) && (x >= newst))
		{
			++arr[j];
			break;
		}
		else
		{
			newfin += interval;
			newst += interval;
		}
	}
}

void Methods::coutintervals(int razmer, int start, int finish, int arr[])
{
	cout << "Here are " << razmer << " intervals for you, wonderful Earth resident." << endl;

	double trace (1.0*(finish - start) / razmer); 
	double newstart = start;

	for (int i = 0; i < razmer-1; ++i)
	{
		cout << "[" << newstart << " , ";
		newstart += trace;
		if (abs(newstart) < 0.01)
			newstart = 0;
		cout << newstart << ")  ";
		cout << arr[i] << " " << endl;
	}
	cout << "[" << newstart << " , " << newstart + trace << "]  ";
	cout << arr[razmer-1] << " " << endl;

}

int Methods::giveX1(int x, int m)
{
	int a = 3; // далі числа для формули
	int c = 7;

	return (a*x + c) % m;
}

int Methods::giveX2(int x, int m)
{
	int d = 1181; // далі числа для формули
	int a = 2363;
	int c = 14;
	return (d*x*x + a*x + c) % m;
}

void Methods::method1(int n)
{

	cout << "You want to use the first method. I am so proud!" << endl; // приветик!

	int x = 1; // перше число
	int m = 18379; // модуль, бо він потрібен для інтервалів
	int st = 0, fin = 1; // старт фініш інтервалів

	const int razmer = 10; // ТУТ МЕНЯТЬ КОЛ-ВО ИНТЕРВАЛОВ
	int arr[razmer] = { 0 };
	
	for (int i = 1; i <= n; ++i)
	{
		intervals(x, m, razmer, arr);
		x = giveX1(x, m);
	}

	coutintervals(razmer, st, fin, arr); // кінець, виводить все що треба
}

void Methods::method2(int n)
{

	cout << "You want to use the second method. I am so proud!" << endl; // приветик!

	int x = 1; // перше число
   	int m = 1181; // модуль, бо він потрібен для інтервалів
	int st = 0, fin = 1; // старт фініш інтервалів

	const int razmer = 10; // ТУТ МЕНЯТЬ КОЛ-ВО ИНТЕРВАЛОВ
	int arr[razmer] = { 0 };

	for (int i = 1; i <= n; ++i)
	{
		intervals(x, m, razmer, arr);
		x = giveX2(x, m);
	}

	coutintervals(razmer, st, fin, arr); // кінець, виводить все що треба
}

void Methods::method3(int n)
{
	cout << "You want to use the third, FIBONACHI method. I am so proud!" << endl; // приветик!
	int x1 = 1; // перше число
	int x2 = 1; // друге число
	int m = 18379; // модуль, бо він потрібен для інтервалів
	int st = 0, fin = 1; // старт фініш інтервалів

	const int razmer = 10; // ТУТ МЕНЯТЬ КОЛ-ВО ИНТЕРВАЛОВ
	int arr[razmer] = { 0 };

	intervals(x1, m, razmer, arr); // це ми перше аналізуємо

	for (int i = 1; i <= n-2; ++i)
	{
		intervals(x2, m, razmer, arr);

		x1 = x2;
		x2 = (x1 + x2) % m;
	}

	coutintervals(razmer, st, fin, arr); // кінець, виводить все що треба
}

void Methods::method4(int n) // плак плак
{
	cout << "You want to use the fourth method. I am so proud!" << endl; // приветик!
	int x = 1; // перше число
	int m = 18379; // модуль, бо він потрібен. Просто потрібен
	int st = 0, fin = 1; // старт фініш інтервалів

	const int razmer = 10; // ТУТ МЕНЯТЬ КОЛ-ВО ИНТЕРВАЛОВ
	int arr[razmer] = { 0 };

	for (int i = 1; i <= n; ++i)
	{
		int x1, y1, g;
		g = gcd(x, m, x1, y1);
		
		while (x1 < 0)
			x1 += m;

		x = giveX1(x, m);
		intervals(x1, m, razmer, arr); // це ми аналізуємо
	}

	coutintervals(razmer, st, fin, arr); // кінець, виводить все що треба
} 

void Methods::method5(int n)
{
	cout << "You want to use the fifth method. It's like a combo of first and second methods. I am so proud!" << endl; // приветик!

	int x = 1; // перше число
	int y = 1; // також перше число
	int m = 18379; // модуль, що буде для х послідовності та у функції
	int my = 1181; // модуль, що буде для у послідовності
	int z = 1; // нарешті число для даного методу!
	int st = 0, fin = 1; // старт фініш інтервалів

	const int razmer = 10; // ТУТ МЕНЯТЬ КОЛ-ВО ИНТЕРВАЛОВ
	int arr[razmer] = { 0 };
	for (int i = 1; i <= n; ++i)
	{
		intervals(z, m, razmer, arr);
		z = (x + y) % m;
		x = giveX1(x, m);
		y = giveX2(y, my);
	}

	coutintervals(razmer, st, fin, arr); // кінець, виводить все що треба
}

void Methods::method6(int n)
{
	cout << "You want to use the sixth method. It's for normal distribution. I am so proud!" << endl; // приветик!

	int x = 1; // всё как в первом методе
	int m = 18379; 
	int st = -3, fin = 3; // старт финиш :)

	const int razmer = 10; // ТУТ МЕНЯТЬ КОЛ-ВО ИНТЕРВАЛОВ
	int arr[razmer] = { 0 };

	double interval = (fin - st)*1.0 / razmer;

	for (int i = 1; i <= n; ++i)
	{
		int s = 0;
		for (int j = 1; j <= 12; ++j)
		{
			cout << x << " ";
			s += x;
			x = giveX1(x, m);
		}
		cout << endl;
		double c = (s*1.0) / m - 6;
		normalintervalswow(c, razmer, interval, st, fin, arr);
	}
	coutintervals(razmer, st, fin, arr); // кінець, виводить все що треба
}

void Methods::method7(int n) // з цього моменту починається кхм лайнокод
{
	cout << "You want to use the seventh method. It's for normal distribution like the sixth. I am so proud!" << endl; // приветик!

	int x = 1; // всё как в первом методе
	int m = 18379;
	int st = -3, fin = 3; // старт финиш :)
	
	const int razmer = 10; // ТУТ МЕНЯТЬ КОЛ-ВО ИНТЕРВАЛОВ
	int arr[razmer] = { 0 };

	double interval = (fin - st)*1.0 / razmer;

	int x1, x2;
	double v1, v2, s;
	for (int i = 1; i <= n - 1; i += 2)
		{
			s = 2;
			while (s > 1)
			{
				x1 = x;
				x2 = giveX1(x, m);
			
				v1 = 2 * x1*(1.0) / m - 1;
				v2 = 2 * x2*(1.0) / m - 1;
				s = v1*v1 + v2*v2;
				x = x2;
			}
			double k = sqrt(-2 * log(s) / s);

			v1 = k * v1;
			v2 = k * v2;
			
			normalintervalswow(v1, razmer, interval, st, fin, arr);

			normalintervalswow(v2, razmer, interval, st, fin, arr);		
		}

	coutintervals(razmer, st, fin, arr); // кінець, виводить все що треба
 } 

void Methods::method8(int n)
{
	cout << "You want to use the seventh method. It's for normal distribution like the sixth. I am so proud!" << endl; // приветик!

	int x1 = 17;
	int x2 = 13; // всё как в первом методе
	int m = 18379;
	int m2 = 1181;

	int st = -3, fin = 3; // старт финиш :)

	const int razmer = 10; // ТУТ МЕНЯТЬ КОЛ-ВО ИНТЕРВАЛОВ
	int arr[razmer] = { 0 };

	double interval = (fin - st)*1.0 / razmer;

	int v = x1; 
	int u = x2;
	
	int x;
	for (int i = 1; i <= n ; ++i)
	{
		double xx;
		x = 0;
		while (x != 1)
		{
			double v1 = v*1.0 / m ;
			double u1 = u*1.0 / m ;

			xx = sqrt(8.0 / exp(1.0))*(v1 - 0.5) / u1;

			v = giveX1(v, m);
			u = giveX1(u, m);
			while (u == 0)
				u = giveX1(u, m);

			if (xx*xx <= (-4.0 * log(u1)))
				x = 1;
		}
		normalintervalswow(xx, razmer, interval, st, fin, arr);
	}

	coutintervals(razmer, st, fin, arr); // кінець, виводить все що треба
}

void Methods::method9(int n)
{
	cout << "You want to use the ninth method. I am bored of making this lab!" << endl; // приветик!

	double x = 0; // перше число
	int u = 1; // для генератора
	int m = 1181; // модуль, бо він потрібен для інтервалів
	int M = 7; // мю
	int st = 0, fin = 100; // старт фініш інтервалів

	const int razmer = 10; // ТУТ МЕНЯТЬ КОЛ-ВО ИНТЕРВАЛОВ
	int arr[razmer] = { 0 };

	double interval = (fin - st)*1.0 / razmer;

	for (int i = 1; i <= n; ++i)
	{
		x = -4 * M * log(u * 1.0 / m) ;

		normalintervalswow(x, razmer, interval, st, fin, arr);

		u = giveX2(u, m);
	}
	
	coutintervals(razmer, st, fin, arr); // кінець, виводить все що треба
}

void Methods::method10(int n)
{
	cout << "You want to use the tenth method. Be proud cause it is the last one!" << endl; // приветик!

	
	int U = 1; // для генератора
	int m = 18379; // модуль, бо він потрібен для інтервалів
	int V = 5;
	double X = 0;
	double Y = 0;
	int st = 0, fin = 100; // старт фініш інтервалів
	int a = 17;
	const int razmer = 10; // ТУТ МЕНЯТЬ КОЛ-ВО ИНТЕРВАЛОВ
	int arr[razmer] = { 0 };

	double interval = (fin - st)*1.0 / razmer;

	for (int i = 1; i <= n; ++i)
	{	
		X = 0;
		while (X <= 0)
		{
			Y = tan(3.14*(U*1.0 / m));
			X = sqrt(2*a - 1)*Y + a - 1;
			U = giveX1(U, m);
			if (X <= 0)
				continue;
			if ((V*1.0/m) > (1 + Y*Y)*exp((a - 1)*log(X / (a - 1)) - sqrt(2 * a - 1)*Y))
				continue;
		}
		normalintervalswow(X, razmer, interval, st, fin, arr);
		V = giveX1(V, m);
	}

	coutintervals(razmer, st, fin, arr); // кінець, виводить все що треба
}