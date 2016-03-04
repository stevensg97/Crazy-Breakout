 /**
 * @file Facade.cpp
 * @date 28/2/16
 * @author Jose Eduardo Jimenez A 2014072577
 * @title Facade
 * @brief Facade entre las clase NewGame e Interfaz
 */

#include <SFML/Graphics.hpp>
#include "Facade.h"
#include "../Interfaz/Interfaz.h"

LinkedList<sf::RectangleShape>* Facade::_Rect = new LinkedList<sf::RectangleShape>();

LinkedList<sf::CircleShape>* Facade::_Circle = new LinkedList<sf::CircleShape>();

Facade::Facade() {
	this->Rect;
	this->Circle;
}

void Facade::start(){
		_Juego = new NewGame();
		Interfaz *_Interfaz = new Interfaz(_Rect,_Circle);
		_Juego->start();
		_Interfaz->run();
}

void Facade::crear(){
	//Creacion de objetos bloques
	for(int indexBloque = 0; indexBloque < GameConstants::NUMERO_DE_ELEMENTOS_EN_MATIRIZ; indexBloque++){
		int columna = indexBloque/GameConstants::NUMERO_DE_COLUMNAS;
		int fila = indexBloque%GameConstants::NUMERO_DE_COLUMNAS;
		Bloques bloque = _Juego->getMatrizDeBloques()->getData(columna,fila);
		if(bloque.get_Visible()){
			this->Rect.setSize(sf::Vector2f(GameConstants::LARGO_DEL_BLOQUE,GameConstants::ANCHO_DEL_BLOQUE));
			this->Rect.setPosition(columna*GameConstants::LARGO_DEL_BLOQUE,fila*GameConstants::ANCHO_DEL_BLOQUE);
			this->Rect.setOutlineThickness(1);
			this->Rect.setOutlineColor(sf::Color::Black);
			switch(bloque.get_tipo()){
			case 0:
				this->Rect.setFillColor(sf::Color::White);
				break;
			case 1:
				this->Rect.setFillColor(sf::Color::Blue);
				break;
			case 2:
				this->Rect.setFillColor(sf::Color::Yellow);
				break;
			case 3:
				this->Rect.setFillColor(sf::Color::Red);
				break;
			case 4:
				this->Rect.setFillColor(sf::Color::Cyan);
				break;
			}
			this->_Rect->insertAtFinal(this->Rect);
		}
	}

	//Creacion de objetos bola
	//for(int indexbola = 0; index)
}

Facade::~Facade() {
	// TODO Auto-generated destructor stub
}
