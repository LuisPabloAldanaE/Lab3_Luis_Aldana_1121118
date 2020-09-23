#include "Auxiliar.h"
#include "Nodo.h"
#include "G1.h"
#include "G2.h"
#include "G3.h"
#include "G4.h"
#include "G5.h"
#include "G6.h"
#include "G7.h"
#include "Mazo.h"



using namespace System;
//Nodo* InicioA = NULL;
Nodo* FinA = NULL;
Nodo* auxA = NULL;
G1* AuxG1 = new G1();
G2* AuxG2 = new G2();
G3* AuxG3 = new G3();
G4* AuxG4 = new G4();
G5* AuxG5 = new G5();
G6* AuxG6 = new G6();
G7* AuxG7 = new G7();
Mazo* AuxM = new Mazo();

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

void Auxiliar::Sacar() {
	while (InicioA->siguiente != NULL)
	{
		if (Destino == '1')
		{
			AuxG1->Llenar(InicioA->valor);
			auxA = InicioA;
			InicioA = InicioA->siguiente;
			delete(auxA);
			
		}
		if (Destino == '2')
		{
			AuxG2->Llenar(InicioA->valor);
			auxA = InicioA;
			InicioA = InicioA->siguiente;
			delete(auxA);

		}
		if (Destino == '3')
		{
			AuxG3->Llenar(InicioA->valor);
			auxA = InicioA;
			InicioA = InicioA->siguiente;
			delete(auxA);

		}
		if (Destino == '4')
		{
			AuxG4->Llenar(InicioA->valor);
			auxA = InicioA;
			InicioA = InicioA->siguiente;
			delete(auxA);

		}
		if (Destino == '5')
		{
			AuxG5->Llenar(InicioA->valor);
			auxA = InicioA;
			InicioA = InicioA->siguiente;
			delete(auxA);

		}
		if (Destino == '6')
		{
			AuxG6->Llenar(InicioA->valor);
			auxA = InicioA;
			InicioA = InicioA->siguiente;
			delete(auxA);

		}
		if (Destino == '7')
		{
			AuxG7->Llenar(InicioA->valor);
			auxA = InicioA;
			InicioA = InicioA->siguiente;
			delete(auxA);

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