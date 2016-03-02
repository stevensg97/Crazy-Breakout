/**
 * @file Bloques
 * @date 15/2/16
 * @author Maider Steven Sanchez Gonzalez 2015014362
 * @title Bloques
 * @brief Clase para crear los bloques del juego
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
	/**
	* @brief Metodo constructor de Bloques
	*/
	Bloques();
	/**
	* @brief Metodo destructor de Bloques
	*/
	virtual ~Bloques();
	/**
	* @brief Indica si un bloque debe ser creado o no
	*/
	void change_Visible();
	/**
	* @brief Recupera la visibilidad de un bloque
	* @return _Visible true si se vera el bloque o false si no se vera: bool
	*/
	bool get_Visible();
	/**
	* @brief Asigna el tipo de bloque
	* @param pTipo Tipo del bloque int
	*/
	void set_tipo(int pTipo);
	/**
	* @brief Recupera el tipo de bloque
	* @return Retorna _Tipo 0,1,2,3,4 segun el bloque: int
	*/
	int get_tipo();
	/**
	* @brief Asigna los puntos que dara el bloque al destruirse
	* @param pPuntos Puntos del bloque int
	*/
	void set_puntos(int pPuntos);
	/**
	* @brief Recupera los puntos del bloque
	* @return Retorna _Puntos la cantidad de puntos del bloque: int
	*/
	int get_puntos();
	/**
	* @brief Asigna la cantidad de golpes necesarios para destruir el bloque
	* @param pGolpes Golpes del bloque int
	*/
	void set_golpes(int pGolpes);
	/**
	* @brief Recupera los golpes del bloque
	* @return Retorna _Golpes la cantidad de golpes del bloque: int
	*/
	int get_golpes();
	/**
	* @brief Asigna la profundidad del bloque
	* @param pProfundidad Profundidad del bloque int
	*/
	void set_profundidad(int pProfundidad);
	/**
	* @brief Recupera la profundidad del bloque
	* @return Retorna _Profundidad la profundidad del bloque: int
	*/
	int get_profundidad();
	/**
	* @brief Asigna la sorpresa del bloque
	* @param pSorpresa Sorpresa del bloque int
	*/
	void set_sorpresa(int pSorpresa);
	/**
	* @brief Recupera la sorpresa del bloque
	* @return Retorna _Sorpresa la sorpresa del bloque: int
	*/
	int get_sorpresa();
	/**
	* @brief Asigna las caracteristicas al bloque para ser creado
	*/
	void crear();
	/**
	* @brief Muestra al bloque creado en pantalla
	*/
	void dibujar();
};

#endif /* BLOQUES_H_ */
