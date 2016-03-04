 /**
 * @file Facade.h
 * @date 28/2/16
 * @author Jose Eduardo Jimenez A 2014072577
 * @title Facade
 * @brief Facade entre las clase NewGame e Interfaz
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
	/**
	 * @brief Metodo constructor de Facade
	 */
	Facade();
	/**
	 * @brief Metodo destructor de Facade
	 */
	virtual ~Facade();

	/**
	 * @breif Metodo crea los objetos a dibujar
	 */
	void crear();
	/**
	 * @brief Metodo inicia el Facade
	 */
	void start();

	/**
	 * @brief Argumento estatico de RectangleShape
	 */
	static LinkedList<sf::RectangleShape> *_Rect;
	/**
	 * @brief Argumento estatico de CircleShape
	 */
	static LinkedList<sf::CircleShape> *_Circle;

private:


	sf::RectangleShape Rect;
	sf::CircleShape Circle;
	NewGame *_Juego;


	static void* controlador(void* pObject);

};

#endif /* FACADE_H_ */
