#include "SFML-2.5.1/include/SFML/Graphics.hpp"

sf::Vector2f viewSize(1024, 768);
sf::VideoMode vm(viewSize.x, viewSize.y);
sf::RenderWindow window(vm, "Hello SFMLGame !!!",sf::Style::Default);

sf::Texture skyTexture;
sf::Sprite skySprite;

void init()
{
	skyTexture.loadFromFile("Assets/graphics/sky.png");
	skySprite.setTexture(skyTexture);
}

void draw()
{
	window.draw(skySprite);
}

int main()
{
	init();
	
	while (window.isOpen())
	{
		window.clear(sf::Color::Red);
		draw();
		window.display();
	}
	
	return 0;
}