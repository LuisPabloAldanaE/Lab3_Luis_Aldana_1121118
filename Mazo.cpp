#include "Mazo.h"
#include "Auxiliar.h"
#include "Nodo.h"

using namespace System;
//Nodo* InicioM = NULL;
Nodo* FinM = NULL;
Nodo* auxM = NULL;
Auxiliar* AuxM = new Auxiliar();
void Mazo::Eliminar() {
	while (InicioM->siguiente != NULL)
	{
		auxM = InicioM;
		InicioM = InicioM->siguiente;
		delete(auxM);
	}
	auxM = InicioM;
	InicioM = InicioM->siguiente;
	delete(auxM);
}
void Mazo::Llenar(int Valor) {
	if (InicioM == NULL)
	{
		InicioM = new Nodo();
		InicioM->valor = Valor;
		FinM = InicioM;
	}
	else
	{
		auxM = new Nodo();
		auxM->valor = Valor;
		auxM->siguiente = InicioM;
		InicioM = auxM;
	}
	FinM->siguiente = NULL;
}
void Mazo::Sacar() {
	if (InicioM->siguiente != NULL)
	{
		AuxM->Llenar(InicioM->valor);
		auxM = InicioM;
		InicioM = InicioM->siguiente;
		delete(auxM);
	}
}
