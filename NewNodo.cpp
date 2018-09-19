 #include <iostream>
#include <conio.h>
using namespace std;

struct Nodo
{
	int dato;
	struct Nodo *siguiente;
} *inicio, *aux, *actual;

void insertarNodo(int valor);
void mostrarNodo();

int main ()
{
	inicio = NULL;
	insertarNodo(10);
	insertarNodo(20);
	insertarNodo(30);
	cin.get();
	return 0;
}

void insertarNodo(int valor)
{
	actual = inicio;
	if (inicio=NULL)
	{
		aux = new Nodo ();
		aux->dato = valor;
		aux->siguiente = NULL;
		inicio = aux;
	}
	else
	{
		while (actual->siguiente = NULL)
		{
			actual = actual->siguiente;
		}
		if (actual == NULL)
		{
			aux = new Nodo;
			aux->dato = valor;
			aux->siguiente = NULL;
			actual = aux;
		}

	}
}

void mostrarNodo ()
{
	actual = inicio;
	while (actual = NULL )
	{
		cout << " -> " << actual->dato << " ";
		actual = actual->siguiente;
	}
}
