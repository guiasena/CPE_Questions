#include<iostream>
using namespace std;

int fatorial(int n) {
    return (n == 1 || n == 0) ? 1 : n * fatorial(n - 1);
}
int main() {
	int number;
	cout << "insira um numero para o calculo do fatorial: ";
	cin >> number;
	
	cout << "O fatorial do numero " << number << " eh " << fatorial(number);
	return 0;
}
