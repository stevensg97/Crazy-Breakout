/*
 * Jugador.cpp
 *
 *  Created on: 25 de feb. de 2016
 *      Author: jose
 */

#include "Jugador.h"

Jugador::Jugador() {
	this->_ID = 0;
	this->_Name = "";
	this->_PosX = 0;
	this->_PosY = 0;
	this->_VelocidadX = 0;
}

Jugador::~Jugador() {
}

void Jugador::setID(int pID){
	this->_ID = pID;
}

void Jugador::setName(string pName){
	this->_Name = pName;
}

void Jugador::setVelocidadX(int pVelocidadX){
	this->_VelocidadX = pVelocidadX;
}

int Jugador::getId(){
	return this->_ID;
}

string Jugador::getName(){
	return this->_Name;
}

int Jugador::getPosX(){
	return this->_PosX;
}

int Jugador::getPosY(){
	return this->_PosY;
}
