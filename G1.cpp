#include "G1.h"
#include "Auxiliar.h"
#include "Nodo.h"

using namespace System;
//Nodo* Inicio1 = NULL;
Nodo* Fin = NULL;
Nodo* aux = NULL;

Auxiliar* Aux1 = new Auxiliar();
void G1::Eliminar() {
	while (Inicio1->siguiente != NULL)
	{
		aux = Inicio1;
		Inicio1 = Inicio1->siguiente;
		delete(aux);
	}
	aux = Inicio1;
	Inicio1 = Inicio1->siguiente;
	delete(aux);
}
void G1::Llenar(int Valor) {
	if (Inicio1 == NULL)
	{
		Inicio1 = new Nodo();
		Inicio1->valor = Valor;
		Fin = Inicio1;
	}
	else
	{
		aux = new Nodo();
		aux->valor = Valor;
		aux->siguiente = Inicio1;
		Inicio1 = aux;
	}
	Fin->siguiente = NULL;
}
void G1::Sacar(int Contador) {
	int vigia = 0;
	while (vigia != Contador && Inicio1->siguiente !=NULL)
	{
		Aux1->Llenar(Inicio1->valor);
		aux = Inicio1;
		Inicio1 = Inicio1->siguiente;
		delete(aux);
		vigia++;
	}
}
int G1::Revisar(int Seguidas) {
	aux = Inicio1->siguiente;
	while (Inicio1->siguiente != NULL)
	{
		if (aux->valor > Inicio1->valor)
		{
			Seguidas++;
		}
		if (Inicio1->siguiente != NULL)
		{
			Inicio1 = Inicio1->siguiente;
			aux = Inicio1->siguiente;
		}
	}
	return Seguidas;
}