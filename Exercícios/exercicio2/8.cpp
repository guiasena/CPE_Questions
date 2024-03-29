#include<iostream>
#include<cmath>
using namespace std;

int main () {
	// Guilherme Araujo Sena || 241008602 || Turma 01
	float cateto1, cateto2;
	cout << "entre com o valor do primeiro cateto: ";
	cin >> cateto1;
	cout << "entre com o valor do segundo cateto: ";
	cin >> cateto2;
	
	float hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2); 
	// sqrt = calcular raiz quadrada. (biblioteca cmath)
	cout << "Valor da Hipotenusa: " << hipotenusa;
	
	return 0;
}
