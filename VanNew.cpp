#include <iostream>

using namespace std;

struct Nodo
{
	int valor;
	struct Nodo *ptr;
};

int main()
{
	int *ptr;
	int Cantidad;
	cout << "Cuantos numeros desea guardar: ";
	cin >> Cantidad;
	//inicio de memoria dinamica
	ptr = new int [Cantidad];
	for(int i=1; i<=Cantidad; i++)
	{
		cout << "Ingrese el numero " << i << " : ";
		cin >> ptr[i];
	}
	delete[] ptr;
	//fin de memoria dinamica
	return 0;
}

