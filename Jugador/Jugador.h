/**
 * @file Jugador.h
 * @date 25/2/16
 * @author Jose Eduardo Jimenez A 2014072577
 * @title Jugador
 * @brief Clase que abstrae el objeto jugador
 */


#ifndef JUGADOR_H_
#define JUGADOR_H_

#include <iostream>
#include "JugadorConstants.h"

using namespace std;

class Jugador : public JugadorConstants{
public:
	/**
	 * @brief Metodo Constructor de Jugador
	 */
	Jugador();
	/**
	 * @brief Metodo destructor de Jugador
	 */
	virtual ~Jugador();

	/**
	 * @brief Metodo asigna la id del jugador
	 * @param pID Id del jugador
	 */
	void setID(int pID);
	/**
	 * @breif Metodo asigna el nombre del jugador
	 * @param pName Nombre
	 */
	void setName(string pName);
	/**
	 * @brief Metodo asigna la velocidad en x
	 * @param pVelocidadX Nueva Velocidad en X
	 */
	void setVelocidadX(int pVelocidadX);

	/**
	 * @brief Metodo devuelve la ID
	 * @return int ID
	 */
	int getId();
	/**
	 * @brief Metodo devuelve el nombre
	 * @return string Nombre
	 */
	string getName();
	/**
	 * @brief Metodo devuelve la posicion en x
	 * @return int Posicion X
	 */
	int getPosX();
	/**
	 * @brief Metodo devuelve la posicion en y
	 * @return int Posicion Y
	 */
	int getPosY();

private:
	int _ID;
	string _Name;
	int _PosX;
	int _PosY;
	int _VelocidadX;

	void moveToLerft();
	void moveToRight();
};

#endif /* JUGADOR_H_ */
