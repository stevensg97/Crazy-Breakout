/*
 * Bloques.h
 *
 *  Created on: 18 de feb. de 2016
 *      Author: steven
 */

#ifndef BLOQUES_H_
#define BLOQUES_H_

class Bloques {
//Atributos
private:
	char* _Tipo;
	int _Puntos;
	int _Golpes;
	int _Profundidad;
	int _Sorpresa;

//Metodos
public:
	Bloques();
	virtual ~Bloques();

	void set_tipo(char* pTipo);
	char* get_tipo();
	void set_puntos(int pPuntos);
	int get_puntos();
	void set_golpes(int pGolpes);
	int get_golpes();
	void set_profundidad(int pProfundidad);
	int get_profundidad();
	void set_sorpresa(int pSorpresa);
	int get_sorpresa();
};

#endif /* BLOQUES_H_ */
