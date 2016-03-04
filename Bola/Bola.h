/**
 * @file Bola.h
 * @date 18/2/16
 * @author Maider Steven Sanchez Gonzalez 2015014362
 * @title Bola
 * @brief Clase para crear las bolas del juego
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
	/**
	* @brief Metodo constructor de Bloques
	*/
	Bola();
	/**
	* @brief Metodo destructor de Bloques
	*/
	virtual ~Bola();
	/**
	* @brief Asigna la posicion en eje x de la bola
	* @param pPosicion_x Posicion en x de la bola int
	*/
	void set_posicion_x(int pPosicion_x);
	/**
	* @brief Recupera la posicion en el eje x de la bola
	* @return Retorna _Posicion_x posicion de la bola en eje x: int
	*/
	int get_posicion_x();
	/**
	* @brief Asigna la posicion en eje y de la bola
	* @param pPosicion_y Posicion en y de la bola int
	*/
	void set_posicion_y(int pPosicion_y);
	/**
	* @brief Recupera la posicion en el eje y de la bola
	* @return Retorna _Posicion_y posicion de la bola en eje y: int
	*/
	int get_posicion_y();
	/**
	* @brief Asigna la velocidad en el eje x de la bola
	* @param pVelocidad Velocidad en eje x de la bola int
	*/
	void set_velocidad_x(int pVelocidad);
	/**
	* @brief Recupera la velocidad en el eje x de la bola
	* @return Retorna _Velocidad_x velocidad de la bola en eje x: int
	*/
	int get_velocidad_x();
	/**
	* @brief Asigna la velocidad en el eje y de la bola
	* @param pVelocidad Velocidad en eje y de la bola int
	*/
	void set_velocidad_y(int pVelocidad);
	/**
	* @brief Recupera la velocidad en el eje y de la bola
	* @return Retorna _Velocidad_y velocidad de la bola en eje y: int
	*/
	int get_velocidad_y();
	/**
	* @brief Asigna la profundidad de la bola
	* @param pProfundidad Profundidad de la bola int
	*/
	void set_profundidad(int pProfundidad);
	/**
	* @brief Recupera la profundidad de la bola
	* @return Retorna _Profundidad profundidad de la bola: int
	*/
	int get_profundidad();
	/**
	* @brief Asigna las caracteristicas a la bola para ser creada
	*/
	void crear();
	/**
	* @brief Muestra la bola creada en pantalla
	*/
	void dibujar();
};

#endif /* BOLA_H_ */
