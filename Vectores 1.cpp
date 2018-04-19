// Vectores 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"
#define MAX 100
using namespace std;
void cargarvector (double a[], int tam);
void mostrarvector (double a[], int tamano);
double promedio(double a[], int tam);
void main(){
	double S[MAX];
	int N;
	double prom;
	do{
		cout<<"Ingrese numero de elementos del vector";
		cin>>N;
	} while (N>MAX||N<=0);
	cargarvector (S,N);
	prom=promedio(S,N);
	for (int i=0; i<tam; i++)
		cout<< "diferencia"<<i<<S[i]-prom;
void cargarvector (double S[], int tam)
	for (int i=0; i <tam; i++){
		cout<<"Vector["<<i<<"]=";
		cin>>S[i];
	}
	void mostrarvector (double a[], int tamano);
	for (int i=0; i<tam; i++){
		cout<<"vector["<<i<<"]="<<S[i];
	}
	double promedio(double a[], int tam);
	int S,prom;
	s=0;
	for (int i=0; i<tam; i++){
		s=s+S[i];
	}
	prom=s/tam;
	return prom;
	getch();
}

