#include <iostream>
#include <conio.h>
using namespace std;

struct Nodo
{
	int Val;
	struct Nodo *ptr;
};

int main ()
{
	struct Nodo *inicio;
	struct Nodo *Nodo;
	Nodo = new struct Nodo; //Crea una estructura
	inicio = Nodo; //Puntero apuntando a puntero
	inicio->ptr=NULL;
	inicio->ptr->Val=20;
/////////////////////////////////////////////////////////////	
	Nodo=new struct Nodo; //Crea otra estructura
	inicio->ptr=Nodo;
	inicio->ptr->ptr=NULL;
	inicio->ptr->Val=20;
/////////////////////////////////////////////////////////////
	Nodo=new struct Nodo; //Crea otra estructura
	inicio->ptr=Nodo;
	inicio->prt->ptr->ptr=NULL;
	inicio->ptr->Val=20;
/////////////////////////////////////////////////////////////	
	
////////IMPRIME LOS VALORES//////////////////////////////////
	cout << inicio->Val << endl;
	cout << inicio->ptr->Val << endl;
	return 0;
}
