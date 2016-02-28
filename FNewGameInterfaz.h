/*
 * FNewGameInterfaz.h
 *
 *  Created on: 27 de feb. de 2016
 *      Author: jose
 */

#ifndef FNEWGAMEINTERFAZ_H_
#define FNEWGAMEINTERFAZ_H_

#include <pthread.h>
#include <SFML/Graphics.hpp>
#include "../Game/NewGame.h"
#include "../Game/GameConstants.h"
#include "../Structures/LinkedList.h"
#include "../Structures/Matriz.h"
#include "../Bloques/Bloques.h"
#include "../Bola/Bola.h"
#include "../Jugador/Jugador.h"
#include "../Interfaz/Interfaz.h"

struct Game_t{
	NewGame* _Juego;
	Interfaz *_Interfaz;
};

class F_NewGame_Interfaz : public GameConstants{
public:
	F_NewGame_Interfaz();
	virtual ~F_NewGame_Interfaz();

	void crear();
	void dibujar();

private:
	static Matriz<Bloques> *_Bloques;
	static LinkedList<Bola> *_Bolas;
	static LinkedList<Jugador> *_Jugadores;

	sf::RectangleShape _Figurabloque;

	void start();
	static void* controlDeInterfaz(void* pObject);
	static void* actualizacion(void* pObject);
};

#endif /* FNEWGAMEINTERFAZ_H_ */
