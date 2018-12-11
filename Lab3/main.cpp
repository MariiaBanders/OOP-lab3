#include <SFML/Graphics.hpp>

#include <Windows.h>

#include <ctime>
#include <cstdlib>
#include <vector>

#include <chrono>
#include <thread>
#include <iostream>

using namespace std;

const float radius = 4;
const float xc = 500; // центр х
const float yc = 300; // центр у
const float eps = 0.0005; //похибка
const int xm = 100;
const int ym = 100; // х у для целочисельного метода

sf::RenderWindow window(sf::VideoMode(1000, 600), "Lab3");

vector < pair <pair <double, double>, pair <double, double>>> lines;

static float ftime = 0;

void DrawPoint(pair <double, double> p, int k)
{
	sf::CircleShape point(radius);
	if (k == 1)
		point.setFillColor(sf::Color(100, 250, 50));
	if (k == 0)
		point.setFillColor(sf::Color(255, 255, 255));
	if (k==2)
		point.setFillColor(sf::Color(0, 179, 255));
	if (k == 3)
		point.setFillColor(sf::Color(179, 179, 0));
	point.setPosition(xc+20*p.first, yc-20*p.second);
	window.draw(point);
}

void DrawLine(pair <double, double> p1, pair <double, double> p2)
{
	sf::Vertex line[] =
	{
		sf::Vertex(sf::Vector2f(xc+20*p1.first, yc-20*p1.second)),
		sf::Vertex(sf::Vector2f(xc+20*p2.first, yc-20*p2.second))
	};

	window.draw(line, 2, sf::Lines);

}

//ax+by+c=0
float returna(pair <double, double> p1, pair <double, double> p2)
{
	return (p1.second- p2.second);
}

float returnb(pair <double, double> p1, pair <double, double> p2)
{
	return (p2.first - p1.first);
}

float returnc(pair <double, double> p1, pair <double, double> p2)
{
	return (p1.first*p2.second - p1.second*p2.first);
}

// направление точка прямая
int znak(float a, float b, float c, pair <double, double> p)
{
	if ((a*p.first + b*p.second + c) > eps)
		return 1;
	else if ((a*p.first + b*p.second + c) < 0)
		return -1;
	else return 0;
}

int sin(pair <double, double> p1, pair <double, double> p2, pair <double, double> p3)
{
	float a = returna(p1, p2);
	float b = returnb(p1, p2);
	float c = returnc(p1, p2);
	return -znak(a,b,c,p3);
}

//Кейл-Кіркпатрік
void KeylKirkpatrick(vector < pair <double, double>> points)
{
	pair <double, double> Al[ym+1] = { make_pair(0,0) };
	pair <double, double> Ar[ym+1] = { make_pair(0,0) };

	//сортуємо
	for (int i = 0; i < points.size(); ++i)
	{
		if ((Al[int(points[i].second)].first == 0) && ((Ar[int(points[i].second)].first == 0)))
		{
			Al[int(points[i].second)] = points[i];
			Ar[int(points[i].second)] = points[i];
		}
		else if (Ar[int(points[i].second)].first == 0)
		{
			if (points[i] > Al[int(points[i].second)])
				Ar[int(points[i].second)] = points[i];
			else
			{
				Ar[int(points[i].second)] = Al[int(points[i].second)];
				Al[int(points[i].second)] = points[i];
			};
		}
		if ((Al[int(points[i].second)].first != 0) && ((Ar[int(points[i].second)].first != 0)))
		{
			if (points[i] < Al[int(points[i].second)])
				Al[int(points[i].second)] = points[i];
			if (points[i] > Ar[int(points[i].second)])
				Ar[int(points[i].second)] = points[i];
		}

	}

	for (int i = 1; i < ym; ++i)
	{
		if (Ar[i].first > 0)
		{
			std::cout << Ar[i].first << endl;
		}
	}
	int i = 0;
	pair <double, double> p1, p2, p3=(make_pair(0,0));

	
	// лево
	while ((i < ym - 1) && (p3.first==0))
	{
		while (Al[i].first == 0)
			++i;
		p1 = Al[i];
		++i;
		while (Al[i].first == 0)
			++i;
		p2 = Al[i];
		++i;

		lines.push_back(make_pair(p1, p2));
		
		{
				for (int i = 0; i < points.size(); ++i)
				{
					DrawPoint(points[i], 0);
				}
				for (int i = 0; i < lines.size(); ++i)
				{
					DrawLine(lines[i].first, lines[i].second);
				}
				window.display();
				int t = clock();
				while (clock() - t <= 1000) {}
				window.clear();
		}

		while (Al[i].first == 0)
			++i;
		p3 = Al[i];
		++i; // запам'ятали три точки

		if (sin(p1, p2, p3) == 1)
			lines.push_back(make_pair(p2, p3));
		else
		{
			while (sin(p1, p2, p3) != 1)
			{
				lines.pop_back();
				p1 = lines[lines.size() - 1].first;
				p2 = lines[lines.size() - 1].second;
				lines.push_back(make_pair(p1, p3));
			}
		}

		{
			for (int i = 0; i < points.size(); ++i)
			{
				DrawPoint(points[i], 0);
			}
			for (int i = 0; i < lines.size(); ++i)
			{
				DrawLine(lines[i].first, lines[i].second);
			}
			window.display();
			int t = clock();
			while (clock() - t <= 1000) {}
			window.clear();
		}

	}

	while (i < ym-1)
	{
		p1 = lines[lines.size() - 1].first;
		p2 = lines[lines.size() - 1].second;
		while ((Al[i].first == 0) && (i < ym - 1))
			++i;
		if (i == ym - 1)
			break;
		p3 = Al[i];
		++i; // запам'ятали три точки

		if (sin(p1, p2, p3) == 1)
		   lines.push_back(make_pair(p2, p3));
		else
		{
			while ((sin(p1, p2, p3) != 1) && (lines.size()>1))
			{
				lines.pop_back();
				p1 = lines[lines.size() - 1].first;
				p2 = lines[lines.size() - 1].second;
			}
			p1 = lines[lines.size() - 1].first;
			p1 = lines[lines.size() - 1].second;
			lines.push_back(make_pair(p2, p3));
		}

		{
			for (int i = 0; i < points.size(); ++i)
			{
				DrawPoint(points[i], 0);
			}
			for (int i = 0; i < lines.size(); ++i)
			{
				DrawLine(lines[i].first, lines[i].second);
			}
			window.display();
			int t = clock();
			while (clock() - t <= 1000) {}
			window.clear();
		}
	}
	
	// право

	i = ym - 1;

	while (i > 0)
	{
		p1 = lines[lines.size() - 1].first;
		p2 = lines[lines.size() - 1].second;
		while ((Ar[i].first == 0) && (i > 0))
			--i;
		if (i == 0)
			break;
		p3 = Ar[i];
		--i; // запам'ятали три точки

		if (sin(p1, p2, p3) == 1)
			lines.push_back(make_pair(p2, p3));
		else
		{
			while ((sin(p1, p2, p3) != 1) && (lines.size()>1))
			{
				lines.pop_back();
				p1 = lines[lines.size() - 1].first;
				p2 = lines[lines.size() - 1].second;
			}
			p1 = lines[lines.size() - 1].first;
			p1 = lines[lines.size() - 1].second;
			lines.push_back(make_pair(p2, p3));
		}

		{
			for (int i = 0; i < points.size(); ++i)
			{
				DrawPoint(points[i], 0);
			}
			for (int i = 0; i < lines.size(); ++i)
			{
				DrawLine(lines[i].first, lines[i].second);
			}
			window.display();
			int t = clock();
			while (clock() - t <= 1000) {}
			window.clear();
		}
	}
}


//Ендрю-Джарвіс
void EndrewJarvis(vector < pair <double, double>> points)
{
	sort(points.begin(), points.end()); // по х сорт
	pair <double, double> left = points[0];
	pair <double, double> right = points[points.size() - 1];

	pair <double, double> pstart = left;
	pair <double, double> pnext, pcheck;
	int start = 0;
	bool end = false;
	// верхня частина :)
	while (!end)
	{
		//std::cout << "fj" << endl;
		bool nashli = false;
		while (!nashli)
		{
			for (int i = start; i < points.size(); ++i)
			{
				if (points[i] != pstart)
				{
					pnext = points[i];

					int firstcheck = -1;
					int z = 0;
					for (int j = 0; j < points.size(); ++j)
					{
						if ((points[j] != pstart) && (points[j] != pnext))
						{
							float a = returna(pstart, pnext);
							float b = returnb(pstart, pnext);
							float c = returnc(pstart, pnext);
							z = znak(a, b, c, points[j]);

						}
						if ((z != 0) && (z != firstcheck))
							break;
						if (j == points.size() - 1)
						{
							nashli = true;
							start = i;
							break;
						}
					}
					if (nashli)
						break;
				}			
			}
			
			for (int i = 0; i < points.size(); ++i)
			{
				DrawPoint(points[i], 0);
			}
			for (int i = 0; i < lines.size(); ++i)
			{
				DrawLine(lines[i].first, lines[i].second);
			}
			lines.push_back(make_pair(pstart, pnext));
			DrawLine(pstart, pnext);
			window.display();
			int t = clock();
			while (clock() - t <= 1000) {}
			
			pstart = pnext;
			break;
		}
		if (pstart == right)
			end = true;
	}

	//нижня частина :)
	pstart = right;
	end = false;
	start = 0;
	while (!end)
	{
		bool nashli = false;
		while (!nashli)
		{
			for (int i = points.size()-1; i >= 0; --i)
			{
				if (points[i] != pstart)
				{
					pnext = points[i];

					int firstcheck = -1;
					int z = 0;
					for (int j = 0; j < points.size(); ++j)
					{
						if ((points[j] != pstart) && (points[j] != pnext))
						{
							float a = returna(pstart, pnext);
							float b = returnb(pstart, pnext);
							float c = returnc(pstart, pnext);
							z = znak(a, b, c, points[j]);
							/*{
								for (int i = 0; i < points.size(); ++i)
								{
									DrawPoint(points[i], 0);
								}
								for (int i = 0; i < lines.size(); ++i)
								{
									DrawLine(lines[i].first, lines[i].second);
								}
								DrawPoint(pstart, 3);
								DrawPoint(pnext, 2);
								DrawPoint(points[j], 1);
								DrawLine(pnext, points[j]);
								window.display();
								int t = clock();
								while (clock() - t <= 1000) {}
								window.clear();
							} */
						}
						if ((z != 0) && (z != firstcheck))
							break;
						if (j == points.size() - 1)
						{
							nashli = true;
							start = i;
							break;
						}
					}
					if (nashli)
						break;
				}
			}
			
			for (int i = 0; i < points.size(); ++i)
			{
				DrawPoint(points[i], 0);
			}
			for (int i = 0; i < lines.size(); ++i)
			{
				DrawLine(lines[i].first, lines[i].second);
			}
			lines.push_back(make_pair(pstart, pnext));
			DrawLine(pstart, pnext);
			window.display();
			int t = clock();
			while (clock() - t <= 1000) {}

			pstart = pnext;
			break;
		}
		if (pstart == left)
			end = true;
	}
	
}


int main()
{
	////// наші точки
	pair <double, double> p(4, 1);
	vector < pair <double, double>> points;
	points.push_back(p);
	p = make_pair(2, 2);
	points.push_back(p);
	p = make_pair(1, 2);
	points.push_back(p);
	p = make_pair(2, 4);
	points.push_back(p);
	p = make_pair(5, 4);
	points.push_back(p);
	p = make_pair(3, 7);
	points.push_back(p);
	p = make_pair(5, 7);
	points.push_back(p); 
	p = make_pair(7, 6);
	points.push_back(p);//пример


	//KeylKirkpatrick(points);
	EndrewJarvis(points);

	system("pause");
	return 0;
}