/*
 * Bola.h
 *
 *  Created on: 21 de feb. de 2016
 *      Author: steven
 */

#ifndef BOLA_H_
#define BOLA_H_

class Bola {

//Atributos
private:
	int _Angulo;
	int _Posicion_x;
	int _Posicion_y;
	int _Velocidad;
	int _Profundidad;

//Metodos
public:
	Bola();
	virtual ~Bola();

	void set_angulo(int pAngulo);
	int get_angulo();
	void set_posicion_x(int pPosicion_x);
	int get_posicion_x();
	void set_posicion_y(int pPosicion_y);
	int get_posicion_y();
	void set_velocidad(int pVelocidad);
	int get_velocidad();
	void set_profundidad(int pProfundidad);
	int get_profundidad();
};

#endif /* BOLA_H_ */
