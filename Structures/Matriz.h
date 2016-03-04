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

	/**
	 * @brief Metodo devuelve la estructura
	 * @return LinckeList<AnyType>
	 */
	LinkedList< LinkedList<AnyType>* >* getBody();

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
		pCantdeFilas=this->_Filas;
	}
}

template<class AnyType>
Matriz<AnyType>::~Matriz(){

}

template<class AnyType>
void Matriz<AnyType>::insertData(int pColumna, int pFila, AnyType pData){
	LinkedList<AnyType> *columna = _Body->searchPosition(pColumna+1);
	Nodo<AnyType>* nodo = columna->searchPositionNode(pFila+1);
	nodo->setData(pData);
}


template<class AnyType>
AnyType Matriz<AnyType>::getData(int pColumna, int pFila){
	LinkedList<AnyType> columna = *_Body->searchPosition(pColumna+1);
	AnyType p = columna.searchPosition(pFila+1);
	return columna.searchPosition(pFila+1);
}

template<class AnyType>
void Matriz<AnyType>::deleteData(int pColumna,int pFila){
	LinkedList<AnyType> *columna = _Body->searchPosition(pColumna+1);
	columna->deleteAtPosition(pFila+1);
}

template<class AnyType>
void Matriz<AnyType>::printMatriz(){
	cout << "Matriz" << endl;
	for(int columna = 0; columna < _Body->len(); columna++){
		LinkedList<AnyType> *Columna = _Body->searchPosition(columna+1);
		Columna->printList();
	}
	cout << "__________________" << endl;
}

template<class AnyType>
LinkedList< LinkedList<AnyType>* >* Matriz<AnyType>::getBody(){
	return this->_Body;
}




#endif /* MATRIZ_H_ */
