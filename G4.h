#pragma once
#include "Nodo.h"
#include "Auxiliar.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
class G4
{
public:
	Nodo* Inicio4 = NULL;
	void Llenar(int Valor);
	void Sacar(int Contador);
	void Eliminar();
};

