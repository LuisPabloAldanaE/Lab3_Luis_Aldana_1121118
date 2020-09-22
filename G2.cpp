#include "G2.h"
#include "Auxiliar.h"
#include "Nodo.h"

using namespace System;
Nodo* Inicio2 = NULL;
Nodo* Fin2 = NULL;
Nodo* aux2 = NULL;
Auxiliar* Aux = new Auxiliar();
void G2::Eliminar() {
	while (Inicio2->siguiente != NULL)
	{
		aux2 = Inicio2;
		Inicio2 = Inicio2->siguiente;
		delete(aux2);
	}
	aux2 = Inicio2;
	Inicio2 = Inicio2->siguiente;
	delete(aux2);
}
void G2::Llenar(int Valor) {
	if (Inicio2 == NULL)
	{
		Inicio2 = new Nodo();
		Inicio2->valor = Valor;
		Fin2 = Inicio2;
	}
	else
	{
		aux2 = new Nodo();
		aux2->valor = Valor;
		aux2->siguiente = Inicio2;
		Inicio2 = aux2;
	}
	Fin2->siguiente = NULL;
}
void G2::Sacar(int Contador) {
	int vigia = 0;
	while (vigia != Contador && Inicio2->siguiente != NULL)
	{
		Aux->Llenar(Inicio2->valor);
		aux2 = Inicio2;
		Inicio2 = Inicio2->siguiente;
		delete(aux2);
		vigia++;
	}
}
