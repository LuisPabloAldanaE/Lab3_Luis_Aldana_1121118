#include "G5.h"
#include "Auxiliar.h"
#include "Nodo.h"

using namespace System;
//Nodo* Inicio5 = NULL;
Nodo* Fin5 = NULL;
Nodo* aux5 = NULL;
Auxiliar* Aux5 = new Auxiliar();
void G5::Eliminar() {
	while (Inicio5->siguiente != NULL)
	{
		aux5 = Inicio5;
		Inicio5 = Inicio5->siguiente;
		delete(aux5);
	}
	aux5 = Inicio5;
	Inicio5 = Inicio5->siguiente;
	delete(aux5);
}
void G5::Llenar(int Valor) {
	if (Inicio5 == NULL)
	{
		Inicio5 = new Nodo();
		Inicio5->valor = Valor;
		Fin5 = Inicio5;
	}
	else
	{
		aux5 = new Nodo();
		aux5->valor = Valor;
		aux5->siguiente = Inicio5;
		Inicio5 = aux5;
	}
	Fin5->siguiente = NULL;
}
void G5::Sacar(int Contador) {
	int vigia = 0;
	while (vigia != Contador && Inicio5->siguiente != NULL)
	{
		Aux5->Llenar(Inicio5->valor);
		aux5 = Inicio5;
		Inicio5 = Inicio5->siguiente;
		delete(aux5);
		vigia++;
	}
}