#pragma once
#include "Nodo.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
class Auxiliar
{
public:
	Nodo* Inicio;
	char Fuente;
	char Destino;
	void Llenar(int Valor);
	void Sacar(int Contador);
	void Eliminar();
};

