/*
 * Interfaz.h
 *
 *  Created on: 27 de feb. de 2016
 *      Author: steven
 */

#ifndef INTERFAZ_H_
#define INTERFAZ_H_
#include <SFML/Graphics.hpp>
#include "InterfazConstants.h"
#include "../Bola/Bola.h"

using namespace std;

class Interfaz:public InterfazConstants {

private:
	//sf::RenderWindow _Ventana;
	sf::Event _Evento;
    sf::RectangleShape _Jugador;

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
	Bola* bolita;

public:
	Interfaz();
	virtual ~Interfaz();
	void run();
	void set_presionadod(bool pPresionadod);
	bool get_presionadod();
	void set_presionadoi(bool pPresionadoi);
	bool get_presionadoi();
	//sf::RenderWindow get_ventana();
	static sf::RenderWindow _Ventana;

};

#endif /* INTERFAZ_H_ */
