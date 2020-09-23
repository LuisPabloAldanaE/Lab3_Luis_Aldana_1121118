#include "G4.h"
#include "Auxiliar.h"
#include "Nodo.h"

using namespace System;
//Nodo* Inicio4 = NULL;
Nodo* Fin4 = NULL;
Nodo* aux4 = NULL;
Auxiliar* Aux4 = new Auxiliar();
void G4::Eliminar() {
	while (Inicio4->siguiente != NULL)
	{
		aux4 = Inicio4;
		Inicio4 = Inicio4->siguiente;
		delete(aux4);
	}
	aux4 = Inicio4;
	Inicio4 = Inicio4->siguiente;
	delete(aux4);
}
void G4::Llenar(int Valor) {
	if (Inicio4 == NULL)
	{
		Inicio4 = new Nodo();
		Inicio4->valor = Valor;
		Fin4 = Inicio4;
	}
	else
	{
		aux4 = new Nodo();
		aux4->valor = Valor;
		aux4->siguiente = Inicio4;
		Inicio4 = aux4;
	}
	Fin4->siguiente = NULL;
}
void G4::Sacar(int Contador) {
	int vigia = 0;
	while (vigia != Contador && Inicio4->siguiente != NULL)
	{
		Aux4->Llenar(Inicio4->valor);
		aux4 = Inicio4;
		Inicio4 = Inicio4->siguiente;
		delete(aux4);
		vigia++;
	}
}
