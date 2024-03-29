#include <iostream>
using namespace std;
	
int main() {
	// Guilherme Araujo Sena || 241008602 || Turma 01
	int number1, number2;
	
	cout << "Insira o primeiro numero: ";
	cin >> number1;
	cout << "Insira o segundo numero: ";
	cin >> number2;
	
	int soma = number1 + number2;
	int produto = number1 * number2;
	int diferenca = number1 - number2;
	int quociente = number1 / number2;

	cout << "Resultado da soma: " << soma << endl;
	cout << "Resultado do produto: " << produto << endl;
	cout << "Resultado do diferenca: " << diferenca << endl;
	cout << "Resultado do quociente: " << quociente << endl;
}
