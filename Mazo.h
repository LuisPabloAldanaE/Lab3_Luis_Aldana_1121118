#pragma once
#include "Nodo.h"
#include "Auxiliar.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
class Mazo
{
public:
	Nodo* InicioM = NULL;
	void Llenar(int Valor);
	void Sacar();
	void Eliminar();
};

