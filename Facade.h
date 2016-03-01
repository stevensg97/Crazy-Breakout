/*
 * Facade.h
 *
 *  Created on: 28 de feb. de 2016
 *      Author: jose
 */

#ifndef FACADE_H_
#define FACADE_H_

#include <SFML/Graphics.hpp>
#include "../Game/NewGame.h"
#include "../Game/GameConstants.h"
#include "../Structures/LinkedList.h"
#include "../Structures/Matriz.h"
#include "../Bola/Bola.h"
#include "../Jugador/Jugador.h"

class Facade {
public:
	Facade();
	virtual ~Facade();

	void crear();
	void dibujar();
	void start();


	static LinkedList<sf::RectangleShape> *_Rect;
	static LinkedList<sf::CircleShape> *_Circle;

private:


	sf::RectangleShape Rect;
	sf::CircleShape Circle;
	NewGame *_Juego;


	static void* controlador(void* pObject);

};

#endif /* FACADE_H_ */
