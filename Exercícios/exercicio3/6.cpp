#include<iostream> 
using namespace std;

int main () {
	float lado1, lado2, lado3;
	cout << "Entre com o primeiro lado do triangulo: ";
	cin >> lado1;
	cout << "Entre com o segundo lado do triangulo: ";
	cin >> lado2;
	cout << "Entre com o terceiro lado do triangulo: ";
	cin >> lado3;
	
	if (lado1 == lado2 && lado1 == lado3  ) {
		cout << "Eh um triangulo equilatero";
	} else if (lado1 != lado2 && lado1 != lado3) {
		cout << "Eh um triangulo escaleno";
	} else {
		cout << "Eh um triangulo isoscele";
	}
	return 0;
}
