/*#include "conslib.h"
#include "figure.h"
#include <iostream>

using namespace std;

void move(Figure** fig, int k)
{
	int bort = 20;
	for (int go = 1; go <= 1000; ++go)
	{
		for (int i = 0; i < k; ++i)
		{
			fig[i] -> draw();
		}
		
		pause(50);

		for (int i = 0; i < k; ++i)
		{
			if ((fig[i]->getXLeft() <= 0) || (fig[i]->getXRight() >= bort))
				fig[i]->vx = -fig[i]->vx;
			if ((fig[i]->getYTop() <= 0) || (fig[i]->getYBottom() >= bort))
				fig[i]->vy = -fig[i]->vy;

			fig[i]->erase();

			fig[i]->x += fig[i]->vx;
			fig[i]->y += fig[i]->vy;
		}
	}
}

int main()
{
	setCursorVisibility(false);

	int i = 14, j = 3;

	Rectangle rect1;
	rect1.x = 15;
	rect1.y = 3;
	rect1.vx = -1;
	rect1.vy = -1;

	Rectangle rect;
	rect.x = 3;
	rect.y = 3;
	rect.vx = 1;
	rect.vy = 1; 

	Circle cekt;
	cekt.x = 10;
	cekt.y = 9;
	cekt.vx = 3;
	cekt.vy = 1;

	Figure* fig[3] = { &rect, &cekt, &rect1 };
	
	move(fig, 3);
} */

#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(shape);
		window.display();
	}

	return 0;
}

