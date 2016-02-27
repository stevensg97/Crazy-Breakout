/**
 * @file Matriz
 * @date 21/2/16
 * @author Jose Eduardo Jiménez A 2014072577
 * @title Matriz
 * @brief Estructura de datos, que refleja una Matriz realida con
 * listas simples.
 */

#ifndef MATRIZ_H_
#define MATRIZ_H_

#include <iostream>
#include "LinkedList.h"
#include "Nodo.h"

template<class AnyType>
class Matriz{
public:
	/**
	 * @brief Metodo constructor de Matriz
	 * @param pCantdeColums Cantidad de Columnas
	 * @param pCantdeFilas Cantidad de Filas
	 */
	Matriz(int pCantdeColums, int pCantdeFilas);

	/**
	 * @brief Metodo destructor de Matriz
	 */
	virtual ~Matriz();

	/**
	 * @brief Metodo inserta el dato en la matriz
	 * @param pColumna Numero de Columna
	 * @param pFila Numero de Fila
	 * @param pDato Dato
	 */
	void insertData(int pColumna, int pFila, AnyType pDato);

	/**
	 * @brief Metodo busca el dato en la matriz
	 * @param pColumna Numero de Columna
	 * @param pFila Numero de Fila
	 * @return <class AnyType> Dato
	 */
	AnyType getData(int pColumna, int pFila);

	/**
	 * @brief Metodo elimina el dato de la matriz
	 * @param pColumna Numero de Columna
	 * @param pFila Numero de Fila
	 */
	void deleteData(int pColumna, int pFila);

	/**
	 * @brief Metodo imprime la matriz
	 */
	void printMatriz();

private:
	LinkedList< LinkedList<AnyType>* > *_Body;
	int _Columnas;
	int _Filas;
};

template<class AnyType>
Matriz<AnyType>::Matriz(int pCantdeColums, int pCantdeFilas){
	this->_Body = new LinkedList<LinkedList<AnyType>* >();
	this->_Columnas = pCantdeColums;
	this->_Filas = pCantdeFilas;
	for(pCantdeColums;pCantdeColums > 0; pCantdeColums--){
		LinkedList<AnyType> *fila = new LinkedList<AnyType>();
		for(pCantdeFilas;pCantdeFilas > 0; pCantdeFilas--){
			Nodo<AnyType> *nodo = new Nodo<AnyType>();
			fila->insertAtBeginNode(nodo);
		}
		_Body->insertAtBegin(fila);
	}
}

template<class AnyType>
Matriz<AnyType>::~Matriz(){

}

template<class AnyType>
void Matriz<AnyType>::insertData(int pColumna, int pFila, AnyType pData){
	LinkedList<AnyType> *columna = _Body->searchPosition(pColumna);
	columna->insertAtPosition(pData,pFila);
}

template<class AnyType>
AnyType Matriz<AnyType>::getData(int pColumna, int pFila){
	LinkedList<AnyType> *columna = _Body->searchPosition(pColumna);
	return columna->searchPosition(pFila);
}

template<class AnyType>
void Matriz<AnyType>::deleteData(int pColumna,int pFila){
	LinkedList<AnyType> *columna = _Body->searchPosition(pColumna);
	columna->deleteAtPosition(pFila);
}

template<class AnyType>
void Matriz<AnyType>::printMatriz(){
	cout << "Matriz" << endl;
	for(int columna = 0; columna < this->_Columnas; columna++){
		LinkedList<AnyType> *Columna = _Body->searchPosition(columna);
		for(int fila = 0; fila < this->_Filas; fila++){
			cout << "C=" << columna << "F=" << fila;
			cout << Columna->searchPosition(fila) << endl;
		}
	}
	cout << "__________________" << endl;
}




#endif /* MATRIZ_H_ */
