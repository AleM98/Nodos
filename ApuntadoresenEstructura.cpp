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
////RELLENO DE ANIMAL3/////////////////////////////////////
	cout << "Edad del Animal 3: ";
	cin >> (inicio+2)->edad;
	cout << "Nombre del Animal 3: ";
	fflush(stdin);
	cin.getline((inicio+2)->nombre, 20, '\n');
	cout << endl;
/////MOSTRAR DATOS GUARDADOS Y DIRECCION///////////////////
	cout << "Direccion inicio: " << &inicio << endl;
	cout << "Direccion Animal 1: " << &animal1 << endl;
	cout << "Direccion Animal 2: " << &animal2 << endl;
	cout << "Edad guardada 1: " << &inicio->edad << endl;
	cout << "Nombre guardado 1: " << &inicio->nombre << endl;
	cout << "Edad guardada 2: " << &(inicio+1)->edad << endl;
	cout << "Nombre guardado 2: " << &(inicio+1)->nombre << endl;
	cin.get();
	return 0;
}

