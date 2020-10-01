#pragma once
#include "Nodo.h"
#include "Auxiliar.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
class G3
{
public:
	Nodo* Inicio3 = NULL;
	int Destino3;
	void Llenar(int Valor);
	void Sacar(int Contador, int Vect[15]);
	void Eliminar();
	int Revisar(int Seguidas);
};

