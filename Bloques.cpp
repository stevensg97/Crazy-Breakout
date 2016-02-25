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
	this->_Tipo="haah";
	this->_Sorpresa=0;

	this->get_golpes();
	//this->set_golpes(_Golpes);


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
