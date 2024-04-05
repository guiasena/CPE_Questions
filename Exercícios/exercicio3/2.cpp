#include<iostream> 
using namespace std;

int main () {
	//Calculadora Álcool X Gasolina
	float valorAlcool, valorGasolina;
	cout << "Entre com o valor do alcool: ";
	cin >> valorAlcool;
	cout << "Entre com o valo da gasolina: ";
	cin >> valorGasolina;
	
	float valeApena = valorAlcool / valorGasolina;
	
	if (valeApena <= 0.7) {
		cout << "Abasteca com alcool.";
	} else {
		cout << "Abasteca com gasolina.";
	}
	return 0;
}
