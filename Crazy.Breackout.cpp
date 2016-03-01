
#include <iostream>
#include "../Facade/Facade.h"
#include "../Interfaz/Interfaz.h"

using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl;
	Facade *facade = new Facade();
	facade->start();
	return 0;
}
