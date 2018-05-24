// Matriz a Vector.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include "Math.h"
#define MAX 100
void cargarMat(float Mat[MAX][MAX]);
using namespace std;
void main(){
	float Mat[MAX][MAX];
	int m, n;
}
void cargarMat(float Mat[MAX][MAX], int m, int n){
	for(int i=0; i<n; i++){
		for(int i=0; i<n; i++){
			cout<<"Mat["<<i<<"]["<<i<<"]=";
			cin>>Mat[i][j];
		}
	}
}
