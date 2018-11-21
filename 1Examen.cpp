#include <iostream>
#include <conio.h>
using namespace std;

int arreglo [0];
struct Arreglo
{
	int valor;
	struct arreglo *siguiente;
}*inicio, *aux;

int main ()
{
	int *ptr;
	int opcion;
	cout << "Bienvenido... " << endl;
	cout << "Elija una opcion." << endl;
	cout << "1.- Ingresar los valores del arreglo" << endl;
	cout << "2.- Recorrer de inicio a fin" << endl;
	cout << "3.- Recorrer de fin a inicio" << endl;
	cout << "4.- Salir" << endl << "OPCION: ";
	cin >> opcion;
	switch(opcion)
	{
		case 1:
			for (int i=0; i<5; i++)
			{
				cout << "Ingrese el valor " << i+1 << ":"<< endl;
				cin >> ptr[i];
			}
		break;
		case 2:
				delete[] ptr;
				MostrarDatos();
		break;
		case 3:
				delete[] ptr;
				MostrarDatos();
		break;
		case 4:
			cout << "Saliendo... " << endl;
		break;
		default:
			
		break;	
	}while(opcion !=4)
	return 0;
}

void MostrarDatos()
{
	ptr = new int [Datos];
	actual = inicio;
	while(actual!=NULL)
	{ 
		cout << " ->" << actual->dato << " ";
		actual = actual->siguiente;
	}
}
