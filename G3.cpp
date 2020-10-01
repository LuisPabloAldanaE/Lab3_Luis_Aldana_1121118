#include "G3.h"
#include "Auxiliar.h"
#include "Nodo.h"

using namespace System;
//Nodo* Inicio3 = NULL;
Nodo* Fin3 = NULL;
Nodo* aux3 = NULL;
Auxiliar* Aux3 = new Auxiliar();
void G3::Eliminar() {
	while (Inicio3->siguiente != NULL)
	{
		aux3 = Inicio3;
		Inicio3 = Inicio3->siguiente;
		delete(aux3);
	}
	aux3 = Inicio3;
	Inicio3 = Inicio3->siguiente;
	delete(aux3);
}
void G3::Llenar(int Valor) {
	if (Inicio3 == NULL)
	{
		Inicio3 = new Nodo();
		Inicio3->valor = Valor;
		Fin3 = Inicio3;
	}
	else
	{
		aux3 = new Nodo();
		aux3->valor = Valor;
		aux3->siguiente = Inicio3;
		Inicio3 = aux3;
	}
	Fin3->siguiente = NULL;
}
void G3::Sacar(int Contador, int Vect[15]){
	int vigia = 0;
	while (vigia != Contador && Inicio3->siguiente != NULL)
	{
		Aux3->Llenar(Inicio3->valor);
		Vect[vigia] = Inicio3->valor;
		aux3 = Inicio3;
		Inicio3 = Inicio3->siguiente;
		delete(aux3);
		vigia++;
	}
}
