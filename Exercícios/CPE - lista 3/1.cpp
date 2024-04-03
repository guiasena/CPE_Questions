#include<iostream>
using namespace std;

int main() {
	float litros, quilometros;
	
	cout << "Total consumido em litros: " << endl;
	cin >> litros;
	cout << "Total percorrido em quilometros: " << endl;
	cin >> quilometros;
	
	float media = quilometros / litros;
	cout << "Essa foi a média de consumo do carro: " << media;
	
	return 0;
}
