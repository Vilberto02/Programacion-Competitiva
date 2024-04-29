/*
Escribe un programa que determine si un cuerpo está parado o en movimiento según los vectores de fuerzas dados.
Entrada
La primera línea contiene un entero positivo n (1 = n = 100), luego siguen n líneas que contienen tres enteros 
cada una: la coordenada xi, la coordenada yi y la coordenada zi del vector fuerza, 
aplicado al cuerpo ( - 100 = xi, yi, zi = 100).
Salida
Imprime la palabra "SI" si el cuerpo está en equilibrio, o la palabra "NO" si no lo está.
*/
#include <bits/stdc++.h> //Libreria que incluye a todas las librerias
using namespace std;
int main (){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	int x[n];
	int y[n];
	int z[n];
	int sumX = 0, sumY = 0, sumZ = 0;
	for (int i=0; i<n; i++){
		cin>>x[i]>>y[i]>>z[i];
	}
	for (int i=0; i<n; i++){
		sumX = sumX + x[i];
		sumY = sumY + y[i];
		sumZ = sumZ + z[i];
	}
	if (sumX == 0 && sumY == 0 && sumZ == 0){
		cout<<"YES";
	} else{
		cout<<"No";
	}
	return 0;
}
