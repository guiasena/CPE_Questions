#include <iostream>
#include <iomanip> 
using namespace std;

int main () {
	double num1, num2, resultado;
	char operador;
	
	cout << "Entre com dois numeros: ";
	cin >> num1 >> num2;
	cout << "Escolha a operação: (*, /, -, +)";
	cin >> operador;
	
	switch (operador) {
		case '+':
			resultado = num1 + num2;
			break;
		case '*':
			resultado = num1 * num2;
			break;
		case '/':
			if (num2 != 0){
				resultado = num1 / num2;
				
			} else  {
				cout << "Operacao invalida";
			}
			break;
		case '-':
			resultado = num1 - num2;
			break;
	}
	cout << "Resultado: " << fixed << setprecision(2) << num1 << operador << num2 << " = " << resultado << endl;

    return 0;
}
