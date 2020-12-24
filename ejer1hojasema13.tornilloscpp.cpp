
#include "stdafx.h"
#include<iostream>
#include<conio.h>
#include <stdlib.h>
#include<time.h>

using namespace std;
using namespace System;

int pernos()
{
	int pernos;
	do
	{
		cout << "ingrese el numero de pernos a analizar(max 100) " << endl;
		cin >> pernos;
	} while (0>pernos || pernos>101);
	return pernos;
}
int p = pernos();
void diametro(int pernos[])
{
	srand(time(NULL));
	for (int i = 0; i < p; i++)
	{
		pernos[i] = 5 + rand() % (26);
		cout << "diametros(" << i + 1 << ")" << pernos[i] << endl;
	}
}

float Promedio(int pernos[])
{
	float Promedio, Suma = 0;
	for (int i = 0; i<p; i++)
		Suma = Suma + pernos[i];
	Promedio = (Suma) / (float)(p);
	return  Promedio;
}
void pernos_de(int Pesos[], int &de)
{
	int Contador = 0;
	for (int i = 0; i<p; i++)
		if (Pesos[i]<de)
			Contador++;
	if (p / 2 <Contador)
		cout << " Lote defectuoso " << endl;
	else
		cout << Contador;

}
void ordenar(int Pernos[])
{

}
int main()
{
	int *Pernos, de;
	Pernos = new int[p];
	diametro(Pernos);
	cout << "el promedio de diametros" << Promedio(Pernos) << endl;
	cout << "Ingrese el diametro de " << endl; cin >> de;
	pernos_de(Pernos, de);
}