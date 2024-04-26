#include<iostream>
using namespace std;

int main (){
	float ex;
	int x, fatorial, potencia;
	ex = 1;
	fatorial = 1;
	potencia = 1;
	cout << "Digite o valor de x: ";
	cin >> x;
	for (int i = 1; i <= 10; i++) {
		fatorial *= i;
		potencia *= x;
		ex += ((float) potencia / (float) fatorial);
	}
	cout << "O valor da constante matematica eh: " << ex;
	return 0;
}
