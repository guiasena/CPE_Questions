#include <iostream>
using namespace std;

int main() {
	// Guilherme Araujo Sena || 241008602 || Turma 01
	float largura, comprimento;
	
	cout << "Insira a largura da sala: ";
	cin >> largura;
	cout << "Insira o comprimento da sala: ";
	cin >> comprimento;
	
	float area = largura * comprimento;
	
	cout << "A area da sala eh: " << area << endl;
	
	return 0;
}
