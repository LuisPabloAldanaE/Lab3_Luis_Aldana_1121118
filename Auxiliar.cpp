#include "Auxiliar.h"
#include "Nodo.h"
#include "G1.h"
#include "G2.h"
#include "G3.h"


using namespace System;
Nodo* InicioA = NULL;
Nodo* FinA = NULL;
Nodo* auxA = NULL;
G1* Aux1 = new G1();
void Auxiliar::Llenar(int Valor) {
	if (InicioA == NULL)
	{
		InicioA = new Nodo();
		InicioA->valor = Valor;
		FinA = InicioA;
	}
	else
	{
		auxA = new Nodo();
		auxA->valor = Valor;
		auxA->siguiente = InicioA;
		InicioA = auxA;
	}
	FinA->siguiente = NULL;
}

void Auxiliar::Sacar(int Contador) {
	int vigia = 0;
	while (vigia != Contador && InicioA->siguiente != NULL)
	{
		if (Destino == '1')
		{
			Aux1->Llenar(InicioA->valor);
			auxA = InicioA;
			InicioA = InicioA->siguiente;
			delete(auxA);
			vigia++;
		}
	}
}

void Auxiliar::Eliminar() {
	while (InicioA->siguiente != NULL)
	{
		auxA = InicioA;
		InicioA = InicioA->siguiente;
		delete(auxA);
	}
	auxA = InicioA;
	InicioA = InicioA->siguiente;
	delete(auxA);
}