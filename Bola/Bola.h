/*
 * Bola.h
 *
 *  Created on: 21 de feb. de 2016
 *      Author: steven
 */

#ifndef BOLA_H_
#define BOLA_H_
#include <SFML/Graphics.hpp>
class Bola {

//Atributos
private:
	bool _Crearbola;
	int _Posicion_x;
	int _Posicion_y;
	int _Velocidad_x;
	int _Velocidad_y;
	int _Profundidad;
	sf::CircleShape _Bola;

//Metodos
public:
	Bola();
	virtual ~Bola();


	void set_posicion_x(int pPosicion_x);
	int get_posicion_x();

	void set_posicion_y(int pPosicion_y);
	int get_posicion_y();

	int get_velocidad_x();
	void set_velocidad_x(int pVelocidad);

	int get_velocidad_y();
	void set_velocidad_y(int pVelocidad);

	void set_profundidad(int pProfundidad);
	int get_profundidad();

	void set_crearbola(bool pCrearbola);
	bool get_crearbola();
	void crear();
	void dibujar();
};

#endif /* BOLA_H_ */
