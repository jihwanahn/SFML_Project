#include "SFML-2.5.1/include/SFML/Graphics.hpp"

sf::Vector2f viewSize(1024, 768);
sf::VideoMode vm(viewSize.x, viewSize.y);
sf::RenderWindow window(vm, "Hello SFMLGame !!!",sf::Style::Default);

sf::Texture skyTexture;
sf::Sprite	skySprite;

sf::Texture bgTexture;
sf::Sprite	bgSprite;

sf::Texture	heroTexture;
sf::Sprite	heroSprite;

void init()
{
	skyTexture.loadFromFile("Assets/graphics/sky.png");
	skySprite.setTexture(skyTexture);

	bgTexture.loadFromFile("Assets/graphics/bg.png");
	bgSprite.setTexture(bgTexture);

	heroTexture.loadFromFile("Assets/graphics/hero.png");
	heroSprite.setTexture(heroTexture);
	heroSprite.setPosition(sf::Vector2f(viewSize.x / 2, viewSize.y / 2));
	heroSprite.setOrigin(heroTexture.getSize().x / 2, heroTexture.getSize().y / 2);
}

void draw()
{
	window.draw(skySprite);
	window.draw(bgSprite);
	window.draw(heroSprite);
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