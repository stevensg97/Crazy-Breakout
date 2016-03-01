/*
 * Bloques.cpp
 *
 *  Created on: 18 de feb. de 2016
 *      Author: steven
 */

#include <SFML/Graphics.hpp>
#include "Bloques.h"
#include "../Interfaz/Interfaz.h"

Bloques::Bloques() {
	this->_Tipo= rand() % 5;
	this->_Visible = false;
	switch(this->_Tipo){
	case 0:
		this->_Puntos = 10;
		this->_Golpes = 1;
		break;
	case 1:
		this->_Puntos = 15;
		this->_Golpes = 2;
		break;
	case 2:
		this->_Puntos = 20;
		this->_Golpes = 3;
		break;
	case 3:
		this->_Puntos = 30;
		this->_Golpes = 1;
		break;
	case 4:
		this->_Puntos = 0;
		this->_Golpes = 0;
	}
	this->_Profundidad=0;
	this->_Sorpresa=0;
	this->_Bloque;
}

Bloques::~Bloques() {
	// TODO Auto-generated destructor stub
}

void Bloques::change_Visible(){
	this->_Visible = !this->_Visible;
}

bool Bloques::get_Visible(){
	return this->_Visible;
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

void Bloques::crear(){
	int x=60;
	int y=30;
	_Bloque.setOutlineThickness(3);
	_Bloque.setOutlineColor(sf::Color::Black);
	_Bloque.setSize(sf::Vector2f(x,y));
	_Bloque.setPosition(200,200);

}

void Bloques::dibujar(){
	Interfaz::_Ventana.draw(_Bloque);
}
