#include<iostream>
using namespace std;

int main () {
	double litros, quilometros;
	
	cout << "Quantidade de litros: ";
	cin >> litros;
	cout << "Quantidade de quilometros: ";
	cin >> quilometros;
	
	double mediaConsumo = quilometros / litros;
	
	cout << "Essa foi a media de consumo final do motorista: " << mediaConsumo << "Km/L";
	
	return 0;
}
