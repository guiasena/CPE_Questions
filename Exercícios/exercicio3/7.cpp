#include<iostream> 
using namespace std;

int main (){
	int senha = 1234, vamoversetupassa;
	cout << "Digite a senha: ";
	cin >> vamoversetupassa;
	if (senha == vamoversetupassa) {
		cout << "ACESSO PERMITIDO";
	} else {
		cout << "ACESSO NEGADO";
	}
	return 0;
}
