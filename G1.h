#pragma once
#include "Nodo.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
class G1
{
public:
	Nodo* Inicio;
	void Llenar(int Valor);
	void Sacar(int Contador);
	void Eliminar();
};

