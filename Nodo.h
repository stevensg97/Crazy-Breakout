/**
 * @file Nodo
 * @date 15/2/16
 * @author Jose Eduardo Jiménez A 2014072577
 * @title Nodo
 * @brief Nodo auxiliar para la lista simple (LinkedList)
 */
#ifndef NODO_H_
#define NODO_H_

#include  <iostream>

using namespace std;

template<class AnyType>
class Nodo {
public:
	/**
	 * @brief Metodo constructor de Nodo
	 */
	Nodo();
	/**
	 * @brief Metodo destructor de Nodo
	 */
	virtual ~Nodo();

	/**
	 * @brief Ingresa el dato al Nodo
	 * @param pData Dato
	 */
	void setData(AnyType pData);
	/**
	 * @brief Referensia su sigiente Nodo
	 * @param pNodo Nodo continuo
	 */
	void setNext(Nodo<AnyType> *pNodo);

	/**
	 * @brief Imprime los datos del Nodo
	 */
	void printNodo();

	/**
	 * @brief Recupera el dato el Nodo
	 * @return <class AnyType> Dato
	 */
	AnyType getData();
	/**
	 * @brief Recupera el siguiente Nodo
	 * @return Nodo<AnyType> Nodo
	 */
	Nodo<AnyType>* getNext();

private:
	AnyType _Data;
	Nodo<AnyType> *_Next;
};

template<class AnyType>
Nodo<AnyType>::Nodo(){
	this->_Next = NULL;
}

template<class AnyType>
Nodo<AnyType>::~Nodo(){

}

template<class AnyType>
void Nodo<AnyType>::setData(AnyType pData){
	this->_Data = pData;
}

template<class AnyType>
void Nodo<AnyType>::setNext(Nodo<AnyType> *pNodo){
	this->_Next = pNodo;
}

template<class AnyType>
void Nodo<AnyType>::printNodo(){
	cout << "ID: " << this << " Dato: " << &this->_Data << " Next: " << this->_Next << endl;
}

template<class AnyType>
AnyType Nodo<AnyType>::getData(){
	return this->_Data;
}

template<class AnyType>
Nodo<AnyType>* Nodo<AnyType>::getNext(){
	return this->_Next;
}

#endif /* NODO_H_ */
