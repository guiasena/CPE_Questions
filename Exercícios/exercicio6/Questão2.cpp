#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int contarCaractere(const string& linha, char caractere) {
    int contador = 0;
    for (char c : linha) {
        if (c == caractere) {
            contador++;
        }
    }
    return contador;
}

int main() {
    string arquivo = "mochileiro.txt";
    char caractereBuscado;

    cout << "Digite o caractere que deseja buscar: ";
    cin >> caractereBuscado;

    ifstream arquivo(arquivo);

    string linha;
    int numeroLinha = 1;
    while (getline(arquivo, linha)) {
        int contador = contarCaractere(linha, caractereBuscado);
        cout << "Linha " << numeroLinha << ": " << contador << " vezes" << endl;
        numeroLinha++;
    }
    arquivo.close();
    return 0;
}