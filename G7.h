#pragma once
#include "Nodo.h"
#include "Auxiliar.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
class G7
{
public:
	Nodo* Inicio7 = NULL;
	void Llenar(int Valor);
	void Sacar(int Contador);
	void Eliminar();
	int Revisar(int Seguidas);
};

