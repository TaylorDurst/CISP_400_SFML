// Include important C++ libraries here
#include <SFML/Graphics.hpp>
#include <iostream>

// Make code easier to type with "using namespace"
using namespace sf;
using namespace std;

int main()
{
	
	VideoMode vm(1920, 1080);

	RenderWindow window(vm, "Timber!!!", Style::Default);


	
	


	while (window.isOpen())
	{


		 

		if (Keyboard::isKeyPressed(Keyboard::Escape))
		{
			window.close();
		}
		
		//ifmouseclicked
        

        sf::RectangleShape dot(sf::Vector2f(200, 40));

        dot.setSize(sf::Vector2f(10, 10));
        dot.setPosition(800, 500);

		//mousebuttonpress

       
            sf::Event event;

            while (window.pollEvent(event))
            {
                switch (event.type)
                {
                case sf::Event::Closed:
                    window.close();
                    break;
                }
            }
            window.clear();
            window.draw(dot);
            window.display();


		


	}

	return 0;
}


