/*
 * Interfaz.h
 *
 *  Created on: 27 de feb. de 2016
 *      Author: steven
 */

#ifndef INTERFAZ_H_
#define INTERFAZ_H_
#include <SFML/Graphics.hpp>

using namespace std;

class Interfaz {

private:
	sf::RenderWindow ventana;
	sf::Event evento;
//sf::RectangleShape shape;

	bool _IsPlay;
	bool _Keypress;
	bool _Keyrelease;
	bool _Click;
    bool _Presionadod;
	bool _Presionadoi;


	void inicializar();
	void eventos();
	void render();
	void cleared();
	void update();

public:
	Interfaz();
	virtual ~Interfaz();
	void run();
	void set_presionadod(bool pPresionadod);
	bool get_presionadod();
	void set_presionadoi(bool pPresionadoi);
	bool get_presionadoi();
};

#endif /* INTERFAZ_H_ */
