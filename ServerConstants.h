/*
 * ServerConstants.h
 *
 *  Created on: 15 de feb. de 2016
 *      Author: jose
 */

#ifndef SERVERCONSTANTS_H_
#define SERVERCONSTANTS_H_


class ServerConstants{
public:
	const bool DEBUG = true;
	int PORT = 8080;
	const string EROOR_SOCKET = "Error al crear el socket";
	const string ERROR_CONECTAR = "Error al connectar";
	const string WAITING = "Esperando el cliente";
	const string CONNECT = "Conecto";
	const string SENDINFO_MSJ = "Bytes enviados; ";
	const string NO_HAY_MSJ = "NOHAYMENSAJES";
};



#endif /* SERVERCONSTANTS_H_ */
