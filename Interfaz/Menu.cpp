/*
 * Menu.cpp
 *
 *  Created on: 28 de feb. de 2016
 *      Author: steven
 */

#include "Menu.h"
#include "Interfaz.h"
sf::RenderWindow Menu::_Ventana;

Menu::Menu(){
	this->_KeyEnter=false;
	this->_IsPlay=true;
	this->_Evento;
	this->_Ventana.create(sf::VideoMode(600, 200), "Crazy Breakout",sf::Style::Close);

}

Menu::~Menu() {
	// TODO Auto-generated destructor stub
}

void Menu::inicializar(){
	menu();
    _Ventana.setFramerateLimit(60);
}


void Menu::eventos(){
	  while (_Ventana.pollEvent(_Evento)){
		  if (_Evento.type == sf::Event::Closed){
		     _Ventana.close();
		  }

		  if (_Evento.type == sf::Event::TextEntered){
		  	 if(_Evento.text.unicode >= 32 && _Evento.text.unicode <= 126){
		  		 _Name += (char)_Evento.text.unicode;
		  	 }
		  	 else if(_Evento.text.unicode==8 && _Name.getSize() > 0){
		  		 _Name.erase(_Name.getSize()-1, _Name.getSize());
		  	 }
		  	 _Text.setString("Nickname:  "+ _Name);
		  }

		  if (_Evento.type == sf::Event::KeyPressed && _Evento.key.code==sf::Keyboard::Return){
			  _KeyEnter=true;
		  	}

	  }
}

void Menu::update(){
	 if (_KeyEnter==true){
		 _Ventana.close();
		 Interfaz* juego = new Interfaz();
		 juego->run();
	 }
	 _KeyEnter=false;



}

void Menu::render(){
	_Ventana.clear(sf::Color(0,200,0,255));
	_Ventana.draw(_Text);
	_Ventana.display();
}

void Menu::cleared(){
	_Ventana.close();
}

void Menu::run(){
	inicializar();
	while(_IsPlay){
		eventos();
		update();
		render();
	}
	cleared();
}

void Menu::menu(){
	if(!_Font.loadFromFile("Prisma.ttf")){
		int r=210;
	}
	_Text.setFont(_Font);
	_Text.setString("Nickname: type here and press enter"+_Name);
	_Text.setCharacterSize(30);
	_Text.setColor(sf::Color::Black);
	_Text.setStyle(sf::Text::Bold | sf::Text::Underlined);
	_Text.setPosition(10,80);

}
