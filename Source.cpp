#include "SFML-2.5.1/include/SFML/Graphics.hpp"

sf::Vector2f viewSize(1024, 768);
sf::VideoMode vm(viewSize.x, viewSize.y);
sf::RenderWindow window(vm, "Hello SFMLGame !!!",sf::Style::Default);

int main()
{
	//Init Game Objects
	while (window.isOpen())
	{
		window.clear(sf::Color::Red);
		window.display();
	}
	
	return 0;
}