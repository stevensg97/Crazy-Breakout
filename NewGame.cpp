
#include "NewGame.h"

Matriz<Bloques>* NewGame::_Bloques = new Matriz<Bloques>(GameConstants::NUMERO_DE_COLUMNAS,GameConstants::NUMERO_DE_FILAS);
LinkedList<Bola>* NewGame::_Bolas = new LinkedList<Bola>();
LinkedList<Jugador>* NewGame::_Jugadores = new LinkedList<Jugador>();
bool NewGame::_GameOver = false;

NewGame::NewGame() {

	this->_Jugador = new Jugador();
	this->_Servidor = new Server();
}

NewGame::~NewGame() {
}

void NewGame::start(){
	pthread_t hilo0;
	pthread_create(&hilo0,0,NewGame::server,(void*)this->_Servidor);
	pthread_detach(hilo0);
	int numBloques = rand() % GameConstants::NUMERO_DE_ELEMENTOS_EN_MATIRIZ + 10;
	for (int index = 0; numBloques > index; index++){
		int posicion = rand() % GameConstants::NUMERO_DE_ELEMENTOS_EN_MATIRIZ;
		Bloques *bloque = new Bloques();
		this->_Bloques->insertData(posicion/GameConstants::NUMERO_DE_COLUMNAS
				,posicion%GameConstants::NUMERO_DE_COLUMNAS,*bloque);
	}
	//this->_Bloques->printMatriz();
	this->_Jugadores->insertAtBegin(*this->_Jugador);
	pthread_t hilo;
	pthread_create(&hilo,0,NewGame::timer,(void*)this->_Bolas);
	pthread_detach(hilo);
	pthread_t hilo2;
	pthread_create(&hilo2,0,NewGame::coliciones,(void*)this->_Bolas);
	pthread_detach(hilo2);

}

void* NewGame::server(void* pObject){
	Server* servidor = (Server*) pObject;
	servidor->start();
}

void* NewGame::timer(void* pObject){
	LinkedList<Bola>* bolas = (LinkedList<Bola>*) pObject;
	while(true){
		sleep(60);
		Bola *bola1 = new Bola();
		Bola *bola2 = new Bola();
		bolas->insertAtFinal(*bola1);
		bolas->insertAtFinal(*bola2);
	}
}

void* NewGame::coliciones(void* pObject){
	LinkedList<Bola>* bolas = (LinkedList<Bola>*) pObject;
	while(!_GameOver){
			for(int index = 0; index < _Bolas->len(); index++){
				Bola bola = _Bolas->searchPosition(index);

				////Colision con bordes
				if((bola.get_posicion_x() < 0) || ((bola.get_posicion_x()+30) > GameConstants::LARGO_DE_LA_PANTALLA)){
					bola.set_velocidad_x(bola.get_velocidad_x()*-1); // Velocidad X
				}else if(bola.get_posicion_y() < 0){
					bola.set_velocidad_y(bola.get_velocidad_y()*-1); // Velocidad Y
				}else if((bola.get_posicion_y()+30) > GameConstants::ANCHO_DE_LA_PANTALLA){
					_Bolas->deleteAtPosition(index);
					if(_Bolas->len() == 0){
						_GameOver = true;
					}
					if(_Bolas->len() == 0){
						_GameOver = true;
					}
				}


				//Colision con Bloques
				for(int index2 = 0; index2 < GameConstants::NUMERO_DE_ELEMENTOS_EN_MATIRIZ; index2++){
					int columna = index2/GameConstants::NUMERO_DE_COLUMNAS;
					int fila = index2%GameConstants::NUMERO_DE_COLUMNAS;
					try{
						Bloques bloque = _Bloques->getData(columna,fila);
						if ((bola.get_posicion_y() > fila*GameConstants::ANCHO_DEL_BLOQUE) &&
								((bola.get_posicion_y()+30) < (fila+1)*GameConstants::ANCHO_DEL_BLOQUE)){
							if(bola.get_posicion_x() > columna*GameConstants::LARGO_DEL_BLOQUE)
								bola.set_velocidad_x(bola.get_velocidad_x()*-1); // Posicion X
							else if((bola.get_posicion_x()+30) < (columna+1)*GameConstants::LARGO_DEL_BLOQUE)
								bola.set_velocidad_y(bola.get_velocidad_y()*-1); //Y
						}
					}catch(exception e){
					}
				}

				//Colicion con jugadores
	//			for(int index3 = 0; index3 < this->_Jugadores->len(); index3++){
	//				Jugador jugador = this->_Jugadores->searchPosition(index3);
	//				if(((bola.get_posicion_x()+30) > jugador.getPosX()) &&
	//						((bola.get_posicion_x()+30) < (jugador.getPosX()+
	//								 (GameConstants::TAMANO_DE_JUGADOR/5))) &&
	//								 ((bola.get_posicion_y()+30) > JU)){
	//					bola.set_velocidad(bola.get_velocidad()*2); //velocidad X
	//					bola.set_velocidad(bola.get_velocidad()*-1); //Velociadad Y
	//				}
	//			}
			}
		}
}

Matriz<Bloques>* NewGame::getMatrizDeBloques(){
	return this->_Bloques;
}

LinkedList<Bola>* NewGame::getListaDeBolas(){
	return this->_Bolas;
}

LinkedList<Jugador>* NewGame::getListaDeJugadores(){
	return this->_Jugadores;
}
