/**
 * @file LinkedList
 * @date 13/2/16
 * @author Jose Eduardo Jiménez A 2014072577
 * @title Lista Simple
 * @brief Estructura de datos, que refleja una lista simple.
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include <iostream>
#include <cstdio>
#include <cstdlib>

#include "Nodo.h"

using namespace std;

template <class AnyType>
class LinkedList{
public:

	/**
	 * @brief Metodo constructor de LinkedList
	 */
	LinkedList();

	/**
	 * @brief Inserta el dato al inicio
	 * @param pData Dato
	 */
	void insertAtBegin(AnyType pData);
	/**
	 * @brief Inserta el nodo al inicio
	 * @param pNode Nodo
	 */
	void insertAtBeginNode(Nodo<AnyType> *pNode);
	/**
	 * @brief Inserta el dato en la posicion
	 * @param pData Dato
	 * @param pPostion Posicion. Comienza en
	 */
	void insertAtPosition(AnyType pData, int pPosition);
	/**
	 * @brief Inserta el nodo en la posicion
	 * @param pNode Nodo
	 * @param pPosition Posicion. Comienza en
	 */
	void insertAtPositionNode(Nodo<AnyType> *pNode, int pPosition);
	/**
	 * @brief Inserta el dato al final
	 * @param pData Dato
	 */
	void insertAtFinal(AnyType pData);
	/**
	 * @brief Inserta el nodo al final
	 * @param pNode Nodo
	 */
	void insertAtFinalNode(Nodo<AnyType> *pNode);

	/**
	 * @brief Busca el dato del inicio
	 * @return <class AnyType> Dato
	 */
	AnyType searchBegin();
	/**
	 * @brief Busca el nodo del inicio
	 * @return Node<AnyType> Nodo
	 */
	Nodo<AnyType>* searchBeginNode();
	/**
	 * @brief Busca el dato segun la posicion. Comienza en
	 * @param pPosition Posicion
	 * @return <class AnyType> Dato
	 */
	AnyType searchPosition(int pPosition);
	/**
	 * @brief Busca el nodo segun la posicion. Comienza en
	 * @param pPosition Posicion
	 * @return Node<AnyType> Nodo
	 */
	Nodo<AnyType>* searchPositionNode(int pPosition);
	/**
	 * @brief Busca el dato del final
	 * @return <class AnyType> Dato
	 */
	AnyType searchFinal();
	/**
	 * @brief Busca el nodo del final
	 * @return Node<AnyType>
	 */
	Nodo<AnyType>* searchFinalNode();
	/**
	 * Indica el tamaño de la lista
	 * @return int Tamaño
	 */
	int len();
	/**
	 * @brief Imprime la lista
	 */
	void printList();
	/**
	 * @brief Revisa si la lista esta vavia
	 * @return bool
	 */
	bool isEmpty();

	/**
	 * @brief Elimina el primero
	 */
	void deleteAtBegin();
	/**
	 * @brief Elimina el node en la posicion. Comienza en
	 * @param pPosition Posicion
	 */
	void deleteAtPosition(int pPosition);
	/**
	 * @brief Elimina el ultimo
	 */
	void deleteAtFinal();

	/**
	 * @brief Metodo destructor de LinkedList
	 */
	virtual ~LinkedList();

private:
	Nodo<AnyType> *_First;
	Nodo<AnyType> *_Last;
	int _Length;

};

template<class AnyType>
LinkedList<AnyType>::LinkedList(){
	this->_First = NULL;
	this->_Last = NULL;
	this->_Length = 0;
}

template<class AnyType>
bool LinkedList<AnyType>::isEmpty(){
	if (this->_Length > 0)
		return false;
	return true;
}

template<class AnyType>
void LinkedList<AnyType>::insertAtBeginNode(Nodo<AnyType> *pNode){
	if (this->isEmpty()){
		this->_Last = this->_First = pNode;
		this->_Length++;
	}else{
		pNode->setNext(this->_First);
		this->_First = pNode;
		this->_Length++;
	}
}

template<class AnyType>
void LinkedList<AnyType>::insertAtBegin(AnyType pData){
	Nodo<AnyType> *temporal = new Nodo<AnyType>();
	temporal->setData(pData);
	insertAtBeginNode(temporal);
}

template<class AnyType>
void LinkedList<AnyType>::insertAtPositionNode(Nodo<AnyType> *pNode, int pPosition){
	Nodo<AnyType> *temporal = this->_First;
	for(int index = 1; index < pPosition-1; index++){
		temporal = temporal->getNext();
	}
	pNode->setNext(temporal->getNext());
	temporal->setNext(pNode);
	this->_Length++;
}

template<class AnyType>
void LinkedList<AnyType>::insertAtPosition(AnyType pData,int pPosition){
	Nodo<AnyType> *temporal = new Nodo<AnyType>;
	temporal->setData(pData);
	insertAtPositionNode(temporal,pPosition);
}

template<class AnyType>
void LinkedList<AnyType>::insertAtFinalNode(Nodo<AnyType>* pNode){
	if(this->isEmpty()){
		this->_First = this->_Last = pNode;
		this->_Length++;
	}else{
		Nodo<AnyType> *temporal = this->_Last;
		temporal->setNext(pNode);
		this->_Length++;
	}
}

template<class AnyType>
void LinkedList<AnyType>::insertAtFinal(AnyType pData){
	Nodo<AnyType> *temporal = new Nodo<AnyType>();
	temporal->setData(pData);
	insertAtFinalNode(temporal);
}

template<class AnyType>
Nodo<AnyType>* LinkedList<AnyType>::searchBeginNode(){
	return this->_First;
}

template<class AnyType>
AnyType LinkedList<AnyType>::searchBegin(){
	Nodo<AnyType> *temporal = searchBeginNode();
	return temporal->getData();
}

template<class AnyType>
Nodo<AnyType>* LinkedList<AnyType>::searchPositionNode(int pPosition){
	Nodo<AnyType> *temporal = this->_First;
		for(int index = 1; index < pPosition; index++){
			temporal = temporal->getNext();
		}
		return temporal;
}

template<class AnyType>
AnyType LinkedList<AnyType>::searchPosition(int pPosition){
	Nodo<AnyType> *temporal = searchPositionNode(pPosition);
	return temporal->getData();
}

template<class AnyType>
Nodo<AnyType>* LinkedList<AnyType>::searchFinalNode(){
	return this->_Last;
}

template<class AnyType>
AnyType LinkedList<AnyType>::searchFinal(){
	Nodo<AnyType> *temporal = searchFinalNode();
	return temporal->_Data;
}

template<class AnyType>
int LinkedList<AnyType>::len(){
	return this->_Length;
}

template<class AnyType>
void LinkedList<AnyType>::printList(){
	cout << "Lista" << endl;
	Nodo<AnyType> *temporal = this->_First;
	cout << "1: ";
	temporal->printNodo();
	for(int index = 1; index < this->_Length; index++){
		temporal = temporal->getNext();
		cout << index+1 << ": ";
		temporal->printNodo();
	}
	cout << "________________" << endl;
}

template<class AnyType>
void LinkedList<AnyType>::deleteAtBegin(){
	Nodo<AnyType> *temporal = this->_First;
	this->_First = temporal->getNext();
	delete(temporal);
	this->_Length--;
}

template<class AnyType>
void LinkedList<AnyType>::deleteAtPosition(int pPosition){
	Nodo<AnyType> *temporal = this->_First;
	if (pPosition-1 != this->_Length){
		for(int index = 1; index < pPosition-1; index++){
			temporal = temporal->getNext();
		}
		Nodo<AnyType> *temporal2 = temporal->getNext();
		temporal->setNext(temporal2->getNext());
		delete(temporal2);
	}else{
		Nodo<AnyType> *temporal2;
		while(temporal->getNext() != NULL){
			temporal2 =  temporal;
			temporal = temporal->getNext();
		}
		temporal2->setNext(NULL);
		delete(temporal);
	}
	this->_Length--;
}

template<class AnyType>
void LinkedList<AnyType>::deleteAtFinal(){
	deleteAtPosition(this->_Length);
}

template<class AnyType>
LinkedList<AnyType>::~LinkedList(){

}
#endif /* LINKEDLIST_H_ */
