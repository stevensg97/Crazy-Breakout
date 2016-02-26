/*
 * Bola.cpp
 *
 *  Created on: 21 de feb. de 2016
 *      Author: steven
 */

#include "Bola.h"

Bola::Bola() {
	this->_Angulo=0;
	this->_Profundidad=0;
	this->_Posicion_x=0;
	this->_Posicion_y=0;
	this->_Velocidad=0;

}

Bola::~Bola() {
	// TODO Auto-generated destructor stub
}

void Bola::set_angulo(int pAngulo){
	_Angulo=pAngulo;
}

int Bola::get_angulo(){
	return _Angulo;
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

void Bola::set_velocidad(int pVelocidad){
	_Velocidad=pVelocidad;
}

int Bola::get_velocidad(){
	return _Velocidad;
}

void Bola::set_profundidad(int pProfundidad){
	_Profundidad=pProfundidad;
}

int Bola::get_profundidad(){
	return _Profundidad;
}

