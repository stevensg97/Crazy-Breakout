
#include <iostream>
#include "../Interfaz/Menu.h"
#include "../Structures/Matriz.h"

using namespace std;

int main() {
	Menu *menu = new Menu();
	menu->run();
//	Matriz<int>* matriz = new Matriz<int>(5,5);
//	cout << "inicial"<< endl;
//	matriz->printMatriz();
//	matriz->insertData(2,3,1);
//	matriz->insertData(1,3,2);
//	matriz->insertData(4,4,3);
//	matriz->insertData(2,4,4);
//	matriz->insertData(3,3,5);
//	matriz->insertData(2,1,6);
//	matriz->insertData(1,1,7);
//	matriz->insertData(0,0,8);
//	cout << "insertar"<< endl;
//	matriz->printMatriz();
//	matriz->deleteData(4,4);
//	matriz->deleteData(2,3);
//	matriz->deleteData(2,1);
//	matriz->deleteData(1,3);
//	cout << "borrar"<< endl;
//	matriz->printMatriz();
	return 0;
}
