#include "G6.h"
#include "Auxiliar.h"
#include "Nodo.h"

using namespace System;
//Nodo* Inicio6 = NULL;
Nodo* Fin6 = NULL;
Nodo* aux6 = NULL;
Auxiliar* Aux6 = new Auxiliar();
void G6::Eliminar() {
	while (Inicio6->siguiente != NULL)
	{
		aux6 = Inicio6;
		Inicio6 = Inicio6->siguiente;
		delete(aux6);
	}
	aux6 = Inicio6;
	Inicio6 = Inicio6->siguiente;
	delete(aux6);
}
void G6::Llenar(int Valor) {
	if (Inicio6 == NULL)
	{
		Inicio6 = new Nodo();
		Inicio6->valor = Valor;
		Fin6 = Inicio6;
	}
	else
	{
		aux6 = new Nodo();
		aux6->valor = Valor;
		aux6->siguiente = Inicio6;
		Inicio6 = aux6;
	}
	Fin6->siguiente = NULL;
}
void G6::Sacar(int Contador) {
	int vigia = 0;
	while (vigia != Contador && Inicio6->siguiente != NULL)
	{
		Aux6->Llenar(Inicio6->valor);
		aux6 = Inicio6;
		Inicio6 = Inicio6->siguiente;
		delete(aux6);
		vigia++;
	}
}