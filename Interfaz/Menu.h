/**
 * @file Menu.h
 * @date 25/2/16
 * @author Maider Steven Sanchez Gonzalez 2015014362
 * @title Menu
 * @brief Clase para crear la ventana de menu de inicio del juego
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
	 /**
	 * @brief Metodo constructor de Menu
	 */
	Menu();
	/**
	* @brief Metodo destructor de Menu
	*/
	virtual ~Menu();
	/**
	* @brief Metodo que inicia la ventana de menu del juego
	*/
	void run();
	static sf::RenderWindow _Ventana;
	/**
	* @brief Metodo que crea y da las caracteristicas a la ventana de menu
	*/
	void menu();
};

#endif /* SRC_INTERFAZ_MENU_H_ */
