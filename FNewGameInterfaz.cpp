/*
 * FNewGameInterfaz.cpp
 *
 *  Created on: 27 de feb. de 2016
 *      Author: jose
 */

#include "FNewGameInterfaz.h"

F_NewGame_Interfaz::F_NewGame_Interfaz() {
	this->_Figurabloque;
}

void F_NewGame_Interfaz::start(){
	Game_t game;
	game._Juego = new NewGame();
	game._Interfaz = new Interfaz();
	pthread_t hilo;
	pthread_create(&hilo,0,F_NewGame_Interfaz::controlDeInterfaz,(void*) &game);
	pthread_detach(hilo);
	pthread_t hilo2;
	pthread_create(&hilo2,0,F_NewGame_Interfaz::actualizacion,(void*) &game);
	pthread_detach(hilo2);
	game._Juego->start();
}

F_NewGame_Interfaz::~F_NewGame_Interfaz() {
}

void* F_NewGame_Interfaz::controlDeInterfaz(void* pObject){
	Game_t game = *(Game_t*)pObject;
	game._Interfaz->run();

}
void* F_NewGame_Interfaz::actualizacion(void* pObject){
	Game_t game = *(Game_t*)pObject;
	while(true){
		for(int indexBloque = 0; indexBloque < GameConstants::NUMERO_DE_ELEMENTOS_EN_MATIRIZ; indexBloque++){
			int elementos = 0;
			int columna = indexBloque/GameConstants::NUMERO_DE_COLUMNAS;
			int fila = indexBloque%GameConstants::NUMERO_DE_COLUMNAS;
			try{
				Bloques bloque = game._Juego->getMatrizDeBloques()->getData(columna,fila);
				//sf::RectangleShape figurabloque;
				//figurabloque.setScale(GameConstants::LARGO_DEL_BLOQUE,GameConstants::ANCHO_DEL_BLOQUE);
				//figurabloque.setPosition(columna*GameConstants::LARGO_DEL_BLOQUE,fila*GameConstants::ANCHO_DEL_BLOQUE);
				//Interfaz::_Ventana.draw(figurabloque);
				elementos++;
			}catch(exception e){
				cout << "exeption" << endl;
				if(elementos == GameConstants::NUMERO_DE_BLOQUES){
					break;
				}else{
					sleep(2);
				}
			}
		}
		//_Bolas = game._Juego->getListaDeBolas();
		//_Jugadores = game._Juego->getListaDeJugadores();
	}
}

void F_NewGame_Interfaz::crear(){

	_Figurabloque.setScale(GameConstants::LARGO_DEL_BLOQUE,GameConstants::ANCHO_DEL_BLOQUE);
	_Figurabloque.setPosition(200,200);

}

void F_NewGame_Interfaz::dibujar(){
	Interfaz::_Ventana.draw(_Figurabloque);
}

