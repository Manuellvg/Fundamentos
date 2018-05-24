// practico lab.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include "Math.h"
#define MAX 100

using namespace std;
void distancia(float &D, float &xa, float &xb, float &ya, float &yb);
void serie (int b,float s,float signo, int n);
void CargarVector(float Serie[MAX], int n, int b, float signo);
void MostrarVector(float Serie[MAX], int n);
void main(){
	float D, xa, xb, ya, yb, s, signo, Serie[MAX];
	int b, n;
	distancia(D,xa,xb,ya,yb);
	cout<<"ingrese el valor de b: ";
	cin>>b;
	cout<<"ingrese el valor de n: ";
	cin>>n;
	serie (b, s, signo, n);
	CargarVector(Serie, n, b, signo);
	MostrarVector(Serie, n);
	getch();
}
void distancia(float &D, float &xa, float &xb, float &ya, float &yb){
	cout<<"Para saber la distancia la coordenada en X del primer punto: ";
	cin>> xa;
	cout<<"Para saber la distancia la coordenada en Y del primer punto: ";
	cin>> ya;
	cout<<"Para saber la distancia la coordenada en X del segundo punto: ";
	cin>> xb;
	cout<<"Para saber la distancia la coordenada en Y del segundo punto: ";
	cin>> yb;
	D=(sqrt((pow((xa-xb),2)+(pow((ya-yb),2)))),2);
	cout<<"La distancia entre los puntos p("<<xa<<","<<ya<<") y q("<<xb<<","<<yb<<") es de:"<<endl<<D;
}

void serie (int b,float s,float signo, int n){
	s=0;
	if((n%2)==0){
		signo=-1;
	}
	if else{
		signo=1;
	}for(int i=1; i<n; i++){
	s=s+(pow((b*signo),i));
	}
		cout<<"la suma de la serie es: "<<s;
}
void CargarVector(float Serie[MAX], int n, int b, float signo){
		for(int i=1; i<n; i++)
			Serie[i]=(pow((b*signo),i))
}
void MostrarVector(float Serie[MAX], int n){
	for(int i=1; i<n; i++)
		cout<<"vector ["<<i<<"]="<<Serie[i]<<endl;
}

