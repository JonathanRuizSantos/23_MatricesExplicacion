#include <iostream>

/* 
Sintaxis de escritura de una matriz: tipoDato nombreMatriz[filas][columnas];
 */
 
using namespace std;
int main(int argc, char** argv) {
	// Implementacion de matrices
	int matriz1[3][3];
	float matriz2[2][2];
	string matriz3[3][2];
	
	// Declarando matriz e inicializando
	int matriz4[3][2] = {{1,2},{3,4},{5,6}};
	// posicion          00 01 10 11  20 21
	
	// Segunda manera de llenar una matriz
	matriz1[0][0] = 7;
	matriz1[0][1] = 8;
	matriz1[1][0] = 9;
	
	// obtener valor especifico de casilla en matriz
	int contm100 = matriz1[0][0];
	int contm101 = matriz1[0][1];
	
	cout<<"contm100: "<<contm100<<endl;
	cout<<"contm101: "<<contm101<<endl;
	
	// modificar valor en matriz
	matriz1[0][0] = 15;
	cout<<"matriz1: "<<matriz1[0][0]<<endl;
	
	
	
	// mostrando matriz4 con ciclo for
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++){
			cout<<matriz4[i][j]<<" ";
		}
		cout<<endl;
	}
	
	system("cls");
	
	// llenando matriz con ciclo for
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			cout<<"Ingresa el dato de la coordenada "<<i<<","<<j<<" : ";
			cin>>matriz2[i][j];
		}
	}
	
	cout<<endl;
	
	// mostrando matriz2 con ciclo for
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++){
			cout<<matriz2[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}