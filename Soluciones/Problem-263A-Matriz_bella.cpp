/*
Entrada
La entrada consta de cinco l�neas, cada l�nea contiene cinco n�meros enteros: 
el j-�simo n�mero entero en la i-�sima l�nea de la entrada representa el elemento 
de la matriz que se encuentra en la intersecci�n de la i-�sima fila y la j-�sima columna. 
Se garantiza que la matriz consta de 24 ceros y un �nico n�mero uno.

Salida
Imprime un �nico n�mero entero: el n�mero m�nimo de movimientos necesarios para que la matriz sea bella.
*/
#include <bits/stdc++.h>
using namespace std;
int main (){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int j, i, item;
	int movimiento = 0;
	int matriz[5][5];
	/*
	Example:
	0 0 0 0 1
	0 0 0 0 0
	0 0 0 0 0
	0 0 0 0 0
	0 0 0 0 0
	->
	0 0 0 0 0
	0 0 0 0 0
	0 0 1 0 0
	0 0 0 0 0
	0 0 0 0 0	
	*/
	for (i = 0; i<5; i++){
		for (j = 0; j<5; j++){
			//int item;
			cin>>item;
			matriz[i][j] = item;
			if (item == 1){
				//Para el eje x.
				if (j>=2){
					movimiento = movimiento + j - 2;
				} else {
					movimiento = movimiento + 2 - j;
				}
				//Para el eje y.
				if (i>=2){
					movimiento = movimiento + i - 2;
				} else {
					movimiento = movimiento + 2 - i;
				}
			}
		}
	}
	cout<<"Cantidad de movimientos: "<<movimiento;
	return 0;
}
