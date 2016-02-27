/*
 * Interfaz.cpp
 *
 *  Created on: 27 de feb. de 2016
 *      Author: steven
 */

#include "Interfaz.h"

Interfaz::Interfaz():ventana {sf::VideoMode{500,600}, "Crazy Breakout"}{
	this->_IsPlay=true;
	this->_Keypress=false;
	this->_Keyrelease=false;
	this->_Click=false;
	this->_Presionadod=false;
	this->_Presionadoi=false;
	//this->shape.RectangleShape(sf::RectangleShape(80,20));

}

Interfaz::~Interfaz() {
	// TODO Auto-generated destructor stub
}

void Interfaz::inicializar(){
	ventana.setFramerateLimit(60);
}

void Interfaz::eventos(){
	  while (ventana.pollEvent(evento)){
		  if (evento.type == sf::Event::Closed){
		     ventana.close();
		  }

		  if (evento.type == sf::Event::KeyPressed && evento.key.code==sf::Keyboard::Right){
		     set_presionadod(true);
		  }

		  if (evento.type == sf::Event::KeyPressed && evento.key.code==sf::Keyboard::Left){
		     set_presionadoi(true);
		  }

	  }
}

void Interfaz::update(){
//	  if (get_presionadod()==true){
		 // if(shape.getPosition().x+80<=500){
			//  x=x+15;
		      //shape.setPosition(x,y);
	//	  }
		 // set_presionadod(false);

	   //}


	  //if (get_presionadoi()==true){
		// if(shape.getPosition().x>0){
			// x=x-15;
		     //shape.setPosition(x,y);
		 //}
		 //set_presionadoi(false);


	  //}
}

void Interfaz::render(){
	ventana.clear(sf::Color(0,200,0,255));
	ventana.display();
}

void Interfaz::cleared(){
	ventana.close();
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
