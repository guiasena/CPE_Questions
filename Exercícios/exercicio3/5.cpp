#include<iostream>
using namespace std;

int main () {
	char vogal;
	cout << "Entre com uma letra: ";
	cin >> vogal;
	
	switch (vogal) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			cout << "Eh uma vogal";
			break;
		default:
			cout << "Nao eh uma vogal";
			break;
	}
	return 0;
}
