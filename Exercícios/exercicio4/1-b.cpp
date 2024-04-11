#include<iostream>
using namespace std;

int fatorial(double n) {
    return (n == 1 || n == 0) ? 1 : n * fatorial(n - 1);
}
int main() {
	double constanteMatematica;
	constanteMatematica = 1 + (1/fatorial(1)) + (1/fatorial(2)) + (1/fatorial(3)) + (1/fatorial(4)) + (1/fatorial(5)) + (1/fatorial(6)) + (1/fatorial(7)) + (1/fatorial(8)) + (1/fatorial(9)) + (1/fatorial(10));
	cout << "O valor da constante matematica eh: " << constanteMatematica;
}