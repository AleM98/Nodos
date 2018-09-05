#include <iostream>
#include <conio.h>
using namespace std;

struct Animal
{
	char nombre[20];
	int edad;
	struct Animal*ptr;
} animal1, animal2, *inicio;

int main (int argc, char** argv)
{
	inicio=&animal1;
	inicio->ptr=&animal2;
	cout << "Edad del Animal 1: ";
	cin >> inicio->edad;
	cout << "Nombre del Animal 1: ";
	fflush(stdin);
	cin.getline(inicio->nombre, 20, '\n');
///////////////////////////////////////////////////////////
	cout << "Edad del Animal 2: ";
	cin >> inicio->ptr->edad;
	cout << "Nombre del Animal 2: ";
	fflush(stdin);
	cin.getline(inicio->ptr->nombre, 20, '\n');
///////////////////////////////////////////////////////////
	int totaldeAnimales = 10;
	struct Animal animal3;
	inicio->ptr->ptr=&animal3;
	struct Animal animal4;
	inicio->ptr->ptr->ptr=&animal4;
////RELLENO DE ANIMAL 3/////////////////////////////////////
	cout << "Edad del Animal 3: ";
	cin >> inicio->ptr->ptr->edad;
	cout << "Nombre del Animal 3: ";
	fflush(stdin);
	cin.getline(inicio->ptr->ptr->nombre, 20, '\n');
	cout << endl;
/////MOSTRAR DATOS GUARDADOS Y DIRECCION///////////////////
	cout << "Direccion inicio: " << &inicio << endl;
	cout << "Direccion Animal 1: " << &animal1 << endl;
	cout << "Direccion Animal 2: " << &animal2 << endl;
	cout << "Edad guardada 1: " << inicio->edad << endl;
	cout << "Nombre guardado 1: " << inicio->nombre << endl;
	cout << "Edad guardada 2: " << inicio->ptr->edad << endl;
	cout << "Nombre guardado 2: " << inicio->ptr->nombre << endl;
	cout << "Nombre 3: " << inicio->ptr->ptr->nombre << endl;
	cout << "Edad 3: " << inicio->ptr->ptr->edad << endl;
	cout << "Nombre 4: " << inicio->ptr->ptr->ptr->nombre << endl;
	cout << "Edad 4: " << inicio->ptr->ptr->ptr->edad << endl;
	cin.get();
	return 0;
}
