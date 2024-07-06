#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct Pessoa {
    string codigo;
    float altura;
    float peso;
};

int main() {
    vector<Pessoa> pessoas;

    // ALTURA
    ifstream arquivoAltura("altura.txt");
    if (arquivoAltura.is_open()) {
        while (!arquivoAltura.eof()) {
            Pessoa pessoa;
            getline(arquivoAltura, pessoa.codigo);
            arquivoAltura >> pessoa.altura;
            arquivoAltura.ignore(); 
            if (!pessoa.codigo.empty()) {
                pessoas.push_back(pessoa);
            }
        }
        arquivoAltura.close();
    } else {
        cerr << "Error" << endl;
        return 1;
    }

    // PESO
    ifstream arquivoPeso("peso.txt");
    if (arquivoPeso.is_open()) {
        int i = 0;
        while (!arquivoPeso.eof() && i < pessoas.size()) {
            arquivoPeso >> pessoas[i].peso;
            arquivoPeso.ignore(); 
            i++;
        }
        arquivoPeso.close();
    } else {
        cerr << "Error" << endl;
        return 1;
    }

    // MAIOR ALTURA
    float maiorAltura = -1.0;
    string codigoMaiorAltura;
    for (const auto& pessoa : pessoas) {
        if (pessoa.altura > maiorAltura) {
            maiorAltura = pessoa.altura;
            codigoMaiorAltura = pessoa.codigo;
        }
    }


   // MAIOR PESO
    double maiorPeso = -1.0;
    string codigoMaiorPeso;
    for (const auto& pessoa : pessoas) {
        if (pessoa.peso > maiorPeso) {
            maiorPeso = pessoa.peso;
            codigoMaiorPeso = pessoa.codigo;
        }
    }

    // IMPRESSAO
    cout << "Pessoa com maior altura (altura = " << maiorAltura << "): " << codigoMaiorAltura << endl;
    cout << "Pessoa com maior peso (peso = " << maiorPeso << "): " << codigoMaiorPeso << endl;
    return 0;
}