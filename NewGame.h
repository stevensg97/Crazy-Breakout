#ifndef NEWGAME_H_
#define NEWGAME_H_

#include <iostream>
#include <stdlib.h>
#include <string>
#include <ctime>
#include <pthread.h>
#include "../Structures/Matriz.h"
#include "../Structures/LinkedList.h"
#include "../Server/Server.h"
#include "../Bola/Bola.h"
#include "../Bloques/Bloques.h"
#include "../Jugador/Jugador.h"
#include "GameConstants.h"

using namespace std;

class NewGame : public GameConstants{
public:
	/**
	 * @brief Metodo constructor de NewGame
	 */
	NewGame();

	/**
	 * @brief Metodo destructor de NewGame
	 */
	virtual ~NewGame();

	/**
	 * @brief Metodo intancia el Juego Crazy Breakout
	 */
	void start();

	Matriz<Bloques>* getMatrizDeBloques();

	LinkedList<Bola>* getListaDeBolas();

	LinkedList<Jugador>* getListaDeJugadores();

private:
	static Matriz<Bloques> *_Bloques;
	static LinkedList<Bola> *_Bolas;
	static LinkedList<Jugador> *_Jugadores;
	Server *_Servidor;
	Jugador *_Jugador;
	static void * timer(void *pObjeto);
	static void * coliciones(void *pObjeto);
	static void * server(void *pObjeto);
	static bool _GameOver;
};

#endif /* NEWGAME_H_ */
