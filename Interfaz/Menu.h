/*
 * Menu.h
 *
 *  Created on: 28 de feb. de 2016
 *      Author: steven
 */

#ifndef SRC_INTERFAZ_MENU_H_
#define SRC_INTERFAZ_MENU_H_
#include <SFML/Graphics.hpp>

using namespace std;

class Menu {
private:
	 //sf::RenderWindow _Ventana;
	 sf::Font _Font;
	 sf::String _Name;
	 sf::Text _Text;
	 bool _KeyEnter;
	 bool _IsPlay;
	 sf::Event _Evento;

	 void inicializar();
	 void eventos();
	 void render();
	 void cleared();
	 void update();

public:
	Menu();
	virtual ~Menu();
	void run();
	static sf::RenderWindow _Ventana;
	void menu();
};

#endif /* SRC_INTERFAZ_MENU_H_ */
