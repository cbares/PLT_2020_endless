#include <iostream>
#include <string.h>
// Les lignes suivantes ne servent qu'à vérifier que la compilation avec SFML fonctionne
#include <SFML/Graphics.hpp>

void testSFML()
{
    sf::Texture texture;
}
// Fin test SFML

#include <state.h>
#include "render.h"


#include "client.h"
#include <iostream>
#include <unistd.h>
using namespace std;
using namespace state;
using namespace render;
using namespace client;


// Fin test SFML
#include "state.h"
using namespace state;
using namespace std;

int main(int argc,char* argv[])
{
<<<<<<< HEAD
	if (strcmp(argv[1],"hello")==0){
        	std::cout << "Woaw, quel code" << std::endl;
    	}
	
	if(argc >= 2 && strcmp(argv[1],"render") == 0 )
  {
        
        StateLayer state();
    while (state.window->isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;



            while (state.window->pollEvent(event))
            {
                if(event.type == sf::Event::Closed)
              {
                    
            }
            
            render::StateLayer update();
=======
    if (strcmp(argv[1],"hello") ==0 ){
        std::cout << "Woaw, quel code" << std::endl;
    }
	else if (strcmp(argv[1],"state") == 0){
		std::cout << "State" << std::endl;
	}
    else {
        std::cout << "Wrong command" << std::endl ;
    }
    return 0;
>>>>>>> af52b5cd7c2cb5eabd7fd1db28d7f1bb8087310c


          }
  }
    return 0;
}
}
