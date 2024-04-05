#include <iostream>
#include <cmath>
using namespace std;

int convertendo(int binario) {
    int decimal = 0, posicao = 0;

    while (binario > 0) {
        int any = binario % 10; 
        decimal += any * pow(2, posicao); 
        binario /= 10; 
        posicao++; // Incrementozinho
    }

    return decimal;
}

int main() {
    int numeroBinario;
    cout << "Digite um número binário: ";
    cin >> numeroBinario;

    int numeroDecimal = convertendo(numeroBinario);
    cout << "Convertendo para o valor decimal, temos: " << numeroDecimal;

    return 0;
}

