#pragma once
#include "Nodo.h"
#include "G1.h"
#include "G2.h"
#include "G3.h"
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

