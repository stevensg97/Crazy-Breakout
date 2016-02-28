/*
 * Bola.cpp
 *
 *  Created on: 21 de feb. de 2016
 *      Author: steven
 */
#include <SFML/Graphics.hpp>
#include "Bola.h"
#include "../Interfaz/Interfaz.h"

Bola::Bola(){
	this->_Crearbola=false;
	this->_Profundidad=0;
	this->_Posicion_x=235;
	this->_Posicion_y=285;
	this->_Velocidad_x=0;
	this->_Velocidad_y=0;
	this->_Bola;

}

Bola::~Bola() {
	// TODO Auto-generated destructor stub
}



void Bola::set_posicion_x(int pPosicion_x){
	_Posicion_x=pPosicion_x;
}

int Bola::get_posicion_x(){
	return _Posicion_x;
}

void Bola::set_posicion_y(int pPosicion_y){
	_Posicion_y=pPosicion_y;
}

int Bola::get_posicion_y(){
	return _Posicion_y;
}

void Bola::set_velocidad_x(int pVelocidad){
	_Velocidad_x=pVelocidad;
}

int Bola::get_velocidad_x(){
	return _Velocidad_x;
}

void Bola::set_velocidad_y(int pVelocidad){
	_Velocidad_y=pVelocidad;
}

int Bola::get_velocidad_y(){
	return _Velocidad_y;
}

void Bola::set_profundidad(int pProfundidad){
	_Profundidad=pProfundidad;
}

int Bola::get_profundidad(){
	return _Profundidad;
}

void Bola::set_crearbola(bool pCrearbola){
	_Crearbola=pCrearbola;
}

bool Bola::get_crearbola(){
	return _Crearbola;
}

void Bola::crear(){
	_Bola.setRadius(15);
	_Bola.setPosition(get_posicion_x(),get_posicion_y());

}

void Bola::dibujar(){
	Interfaz::_Ventana.draw(_Bola);
}
