#include<iostream>
#include<cmath>
using namespace std;

int main () {
/* 
50km = R$1.75;
100km = R$1.65;
150km+ = R$1.50.
*/
	// Guilherme Araujo Sena || 241008602 || Turma 01
	double distancia;
	double medio;
	double total;

	cout << "Entre com a distância: ";
	cin >> distancia;
	
	if (distancia <= 50) {
		total = distancia * 1.75;
	} else if (distancia >= 150) {
		total = distancia * 1.50;
	} else {
		total = 50 * 1.75 + 100 * 1.65 + (distancia - 150) * 1.50;
	}
	
	medio = total / distancia;
	cout << "Valor total a se pagar: " << total << endl;
	cout << "Valor medio por quilometro: " << medio << endl;
	
	return 0;
}

