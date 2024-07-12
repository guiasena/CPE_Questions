#include<iostream>
#include<fstream>
#include<vector>
#include<sstream>
using namespace std;

int main() {
    ifstream arquivoEntrada("vetores.txt");
    ofstream arquivoSaida("soma.txt");

    if ( arquivoEntrada.is_open() || !arquivoSaida.is_open()) {
        cerr << "Erro ao abrir ou criar os arquivos." << endl;
        return 1;
    }

    vector<int> soma;
    string linha;

    while (getline(arquivoEntrada, linha)) {
        istringstream iss(linha);
        int num;
        int i = 0;

        while (iss >> num) {
            if (i >= soma.size()) {
                soma.push_back(num);
            } else {
                soma[i] += num;
            }
            i++;
        }
    }

    for (int num : soma) {
        arquivoSaida << num << " ";
    }

    arquivoEntrada.close();
    arquivoSaida.close();

    cout << "Processo realizado." << endl;

    return 0;
}
