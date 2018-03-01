// Votacion.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"
using namespace std;
void main(){
	int edad;
	cout<<"ingrese edad:"<<endl;
	cin>>edad;
	if (edad>=18)
		cout<<"Puede votar";
	else
		cout<<"No puede votar";
	getch();
}

