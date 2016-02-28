/*
 * Interfaz.cpp
 *
 *  Created on: 27 de feb. de 2016
 *      Author: steven
 */

#include "Interfaz.h"
sf::RenderWindow Interfaz::_Ventana;
//Ventana {sf::VideoMode{VENTANA_X, VENTANA_Y}, "Crazy Breakout"}
Interfaz::Interfaz(){

	this->_IsPlay=true;
	this->_Keypress=false;
	this->_Keyrelease=false;
	this->_Click=false;
	this->_Presionadod=false;
	this->_Presionadoi=false;
	this->_Jugador;
	this->bolita = new Bola();
	this->bloquecito= new Bloques();
	this->_Ventana.create(sf::VideoMode(VENTANA_X, VENTANA_Y), "Crazy Breakout",sf::Style::Close);

}

Interfaz::~Interfaz() {
	// TODO Auto-generated destructor stub
}

void Interfaz::inicializar(){
	_Ventana.setFramerateLimit(60);
	_Jugador.setSize(sf::Vector2f(80,20));
	_Jugador.setPosition(210,500);
	 bolita->crear();
	 bloquecito->crear();
}

void Interfaz::eventos(){
	  while (_Ventana.pollEvent(_Evento)){
		  if (_Evento.type == sf::Event::Closed){
		     _Ventana.close();
		  }

		  if (_Evento.type == sf::Event::KeyPressed && _Evento.key.code==sf::Keyboard::Right){
		     set_presionadod(true);
		  }

		  if (_Evento.type == sf::Event::KeyPressed && _Evento.key.code==sf::Keyboard::Left){
		     set_presionadoi(true);
		  }

	  }
}

void Interfaz::update(){
	  if (get_presionadod()==true){
		  if(_Jugador.getPosition().x+80<500){
	          X=X+15;
		      _Jugador.setPosition(X,Y);
		  }
		  set_presionadod(false);

	   }


	  if (get_presionadoi()==true){
		 if(_Jugador.getPosition().x>0){
			 X=X-15;
		     _Jugador.setPosition(X,Y);
		 }
		 set_presionadoi(false);


	  }
}

void Interfaz::render(){
	_Ventana.clear(sf::Color(0,200,0,255));
	_Ventana.draw(_Jugador);
	bolita->dibujar();
	bloquecito->dibujar();

	_Ventana.display();
}

void Interfaz::cleared(){
	_Ventana.close();
}

void Interfaz::run(){
	inicializar();
	while(_IsPlay){
		eventos();
		update();
		render();
	}
	cleared();
}

void Interfaz::set_presionadod(bool pPresionadod){
	_Presionadod=pPresionadod;
}

bool Interfaz::get_presionadod(){
	return _Presionadod;
}

void Interfaz::set_presionadoi(bool pPresionadoi){
	_Presionadoi=pPresionadoi;
}

bool Interfaz::get_presionadoi(){
	return _Presionadoi;
}

//sf::RenderWindow Interfaz::get_ventana(){
	//return _Ventana;
//}
