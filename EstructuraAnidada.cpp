#include <iostream>
#include <conio.h>
using namespace std;

struct  Dato
{
	int dato1;
	char dato2[20];
};
struc Dato2
{
	Dato;  
}

int main (int argc, char** argv)
{
	struct Dato var1;
	struct Dato*ptr;
	ptr=&var1;
	cout << "Puntero: " << &ptr << endl;
	//imprimir el valor del puntero
	cout << "Direccion puntero: " << ptr << endl << endl;;
	//imprime el valor del puntero
	cin >> (ptr->dato1);
	cin.getline(ptr->dato2, 20, '\n');
	cin.getline(ptr->dato2, 20, '\n');
	cout << endl;
	//imprime el valor del puntero
	cout << "\nPuntero: " << ptr->dato1 << endl;
	//imprime el valor del puntero
	cout << "Puntero: " << ptr->dato2 << endl;	
	getch ();
	return 0;
}
