#include<iostream>
using namespace std;

bool ehpalindromo (int numero) {
	int numeroOriginal = numero, numeroReverso = 0;
	
	while (numero > 0) {
		int any = numero % 10;
		numeroReverso = numeroReverso * 10 + any;
		numero /= 10;
	}
	return numeroOriginal == numeroReverso;
	
} 

int main () {
	int vapo;
	cout << "Entre com um numero de ate 5 numeros: ";
	cin >> vapo;
	
	if (ehpalindromo(vapo)) {
		cout << "Eh um palindromo.";
	} else {
		cout << "Nao eh um palindromo.";
	}
	return 0;
}
