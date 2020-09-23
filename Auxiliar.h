#pragma once
#include "Nodo.h"
#include "G1.h"
#include "G2.h"
#include "G3.h"
#include "G4.h"
#include "G5.h"
#include "G6.h"
#include "G7.h"
#include "Mazo.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
class Auxiliar
{
public:
	Nodo* InicioA = NULL;
	char Fuente;
	char Destino;
	void Llenar(int Valor);
	void Sacar();
	void Eliminar();
};

