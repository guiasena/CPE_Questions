#include <iostream>
using namespace std;

int main () {
	// Guilherme Araujo Sena || 241008602 || Turma 01
	int number1, number2;
	
	cout << "Digite o primeiro numero: ";
	cin >> number1;
	cout << "Digite o segundo numero: ";
	cin >> number2;
	
	int multiplo = number1 % number2;
	
	if (multiplo == 0) {
		cout << "Estes numeros sao multiplos.";
	} else {
		cout << "Estes numeros nao sao multiplos.";
	}
	
	return 0;
}
