#include <iostream>
#include <cmath>
using namespace std;
	
int main () {
	// Guilherme Araujo Sena || 241008602 || Turma 01
	float raio;
	cout << "Forneca o raio de um circulo: ";
	cin >> raio;

	float pi = 3.14159;
	int diametro = 2 * raio;
	int area = pi * pow(raio, 2); // POW só foi possível por causa da biblioteca.
	
	cout << "Diametro da circuferencia: " << diametro << endl;
	cout << "Area da circuferencia: " << area << endl;
	
	return 0;	
}
