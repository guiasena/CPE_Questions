#include<iostream> 
using namespace std;

int main () {
	double alcool, gasolina;
	cout << "Entre com o valor do alcool: ";
	cin >> alcool;
	cout << "Entre com o valor da gasolina: ";
	cin >> gasolina;
	
	double divisao = alcool / gasolina;
	if (divisao < 0.7){ 
		cout << "Abasteça com álcool.";
	} else {
		cout << "Abasteça com gasolina. ";
	}

	return 0;
}
