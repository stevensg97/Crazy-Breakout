/*
 * Bloques.h
 *
 *  Created on: 18 de feb. de 2016
 *      Author: steven
 */

#ifndef BLOQUES_H_
#define BLOQUES_H_
#include <SFML/Graphics.hpp>

class Bloques {
//Atributos
private:
	bool _Visible;
	int _Tipo;
	int _Puntos;
	int _Golpes;
	int _Profundidad;
	int _Sorpresa;
	sf::RectangleShape _Bloque;

//Metodos
public:
	Bloques();
	virtual ~Bloques();

	void change_Visible();
	bool get_Visible();
	void set_tipo(int pTipo);
	int get_tipo();
	void set_puntos(int pPuntos);
	int get_puntos();
	void set_golpes(int pGolpes);
	int get_golpes();
	void set_profundidad(int pProfundidad);
	int get_profundidad();
	void set_sorpresa(int pSorpresa);
	int get_sorpresa();

	void crear();
	void dibujar();
};

#endif /* BLOQUES_H_ */
