/**
 * @file Interfaz.h
 * @date 20/2/16
 * @author Maider Steven Sanchez Gonzalez 2015014362
 * @title Interfaz
 * @brief Clase para crear la ventana de juego
 */

#ifndef INTERFAZ_H_
#define INTERFAZ_H_
#include <SFML/Graphics.hpp>
#include "InterfazConstants.h"
#include "../Bola/Bola.h"
#include "../Bloques/Bloques.h"
#include "../Structures/LinkedList.h"

using namespace std;

class Interfaz:public InterfazConstants {

private:
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
	/**
	* @brief Metodo constructor de Bloques
	* @param pRects lista enlazada de rectangulos(bloques)
	* @param pCircles lista enlazada de circulos(bolas)
	*/
	Interfaz();
	/**
	* @brief Metodo destructor de Interfaz
	*/
	virtual ~Interfaz();
	/**
	* @brief Metodo que inicia la ventana de juego
	*/
	void run();
	/**
	* @brief Asigna true si la tecla derecha es presionada y false si no
	* @param pPresionadod Tecla derecha presionada bool
	*/
	void set_presionadod(bool pPresionadod);
	/**
	* @brief Recupera el estado de la tecla derecha
	* @return Retorna _Presionadod tecla derecha presionada: bool
	*/
	bool get_presionadod();
	/**
	* @brief Asigna true si la tecla izquierda es presionada y false si no
	* @param pPresionadoi Tecla izquierda presionada bool
	*/
	void set_presionadoi(bool pPresionadoi);
	/**
	* @brief Recupera el estado de la tecla izquierda
	* @return Retorna _Presionadoi tecla izquierda presionada: bool
	*/
	bool get_presionadoi();
	static sf::RenderWindow _Ventana;

};

#endif /* INTERFAZ_H_ */
