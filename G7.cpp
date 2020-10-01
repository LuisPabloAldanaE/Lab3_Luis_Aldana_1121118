#include "G7.h"
#include "Auxiliar.h"
#include "Nodo.h"

using namespace System;
//Nodo* Inicio7 = NULL;
Nodo* Fin7 = NULL;
Nodo* aux7 = NULL;
Auxiliar* Aux7 = new Auxiliar();
void G7::Eliminar() {
	while (Inicio7->siguiente != NULL)
	{
		aux7 = Inicio7;
		Inicio7 = Inicio7->siguiente;
		delete(aux7);
	}
	aux7 = Inicio7;
	Inicio7 = Inicio7->siguiente;
	delete(aux7);
}
void G7::Llenar(int Valor) {
	if (Inicio7 == NULL)
	{
		Inicio7 = new Nodo();
		Inicio7->valor = Valor;
		Fin7 = Inicio7;
	}
	else
	{
		aux7 = new Nodo();
		aux7->valor = Valor;
		aux7->siguiente = Inicio7;
		Inicio7 = aux7;
	}
	Fin7->siguiente = NULL;
}
void G7::Sacar(int Contador) {
	int vigia = 0;
	while (vigia != Contador && Inicio7->siguiente != NULL)
	{
		Aux7->Llenar(Inicio7->valor);
		aux7 = Inicio7;
		Inicio7 = Inicio7->siguiente;
		delete(aux7);
		vigia++;
	}
}
int G7::Revisar(int Seguidas) {
	aux7 = Inicio7->siguiente;
	while (Inicio7->siguiente != NULL)
	{
		if (aux7->valor > Inicio7->valor)
		{
			Seguidas++;
		}
		if (Inicio7->siguiente != NULL)
		{
			Inicio7 = Inicio7->siguiente;
			aux7 = Inicio7->siguiente;
		}
	}
	return Seguidas;
}
