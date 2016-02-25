/*
  * Server.h
 *
 *  Created on: 15 de feb. de 2016
 *      Author: jose
 */

#ifndef SERVER_H_
#define SERVER_H_

#include <iostream>
#include <netinet/in.h>
#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>
#include "../Structures/LinkedList.h"
#include "ServerConstants.h"

using namespace std;

struct infoSocket{
	int _Conection;
	sockaddr_in _Info;
};

class Server : public ServerConstants{
public:
	/**
	 * @brief Metodo constructor del Server
	 */
	Server();
	/**
	 * @brief Metodo destructor de Server
	 */
	virtual ~Server();

	/**
	 * @brief Metodo inicia el server
	 */
	void start();

	/**
	 * @brief Metodo envia un mensaje por el server
	 * @param pMansaje Mensaje a enviar
	 */
	void sendinfo(const char *pMensaje);

	/**
	 * @brief Metodo retorna el mensaje
	 * "param string Mensaje
	 */
	string getMensaje();


	static LinkedList<> *_Mensajes;

private:
	int _Socket;
	int _Port;
	sockaddr_in _Info;
	bool create();
	bool connect();
	static void * controlador(void *pObjeto);
	LinkedList<int> *_Clientes;
};

#endif /* SERVER_H_ */
