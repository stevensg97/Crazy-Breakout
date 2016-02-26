/*
 * Bloques.cpp
 *
 *  Created on: 18 de feb. de 2016
 *      Author: steven
 */

#include "../Bloques/Bloques.h"


Bloques::Bloques() {
	this->_Puntos=0;
	this->_Profundidad=0;
	this->_Golpes=0;
	this->_Tipo=0;
	this->_Sorpresa=0;


}

Bloques::~Bloques() {
	// TODO Auto-generated destructor stub
}

int Bloques::get_golpes(){
	return _Golpes;
}

void Bloques::set_golpes(int pGolpes){
	_Golpes=pGolpes;
}

int Bloques::get_profundidad(){
	return _Profundidad;
}

void Bloques::set_profundidad(int pProfundidad){
	_Profundidad=pProfundidad;
}

int Bloques::get_puntos(){
	return _Puntos;
}

void Bloques::set_puntos(int pPuntos){
	_Puntos=pPuntos;
}

int Bloques::get_sorpresa(){
	return _Sorpresa;
}

void Bloques::set_sorpresa(int pSorpresa){
	_Sorpresa=pSorpresa;
}

int Bloques::get_tipo(){
	return _Tipo;
}

void Bloques::set_tipo(int pTipo){
	_Tipo=pTipo;
}



