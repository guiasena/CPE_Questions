#include<iostream>
using namespace std;

int fatorial(int n) {
    return (n == 1 || n == 0) ? 1 : n * fatorial(n - 1);
}
int main() {
	int number;
	cout << "insira um numero para o calculo do fatorial: ";
	cin >> number;
	if (number <= 0) {
		cout << "Insira um numero valido! (x > 0) \n";
		return main();
	}
	cout << "O fatorial do numero " << number << " eh " << fatorial(number);
	return 0;
}
