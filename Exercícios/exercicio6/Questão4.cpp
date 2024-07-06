#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

void cadastrarAluno() {
    string nomeAluno;
    int matricula;

    cout << "Digite o nome do aluno: ";
    cin >> nomeAluno;
    cout << "Digite a matricula do aluno: ";
    cin >> matricula;

    ofstream arquivo(nomeAluno + ".txt");
    if (arquivo) {
        arquivo << matricula << endl;
        cout << "Aluno cadastrado com sucesso!" << endl;
    } else {
        cerr << "Erro ao cadastrar o aluno!" << endl;
    }
}

void adicionarNota() {
    string nomeAluno;
    double nota;

    cout << "Digite o nome do aluno: ";
    cin >> nomeAluno;
    cout << "Digite a nota do aluno: ";
    cin >> nota;

    ifstream arquivoEntrada(nomeAluno + ".txt");
    if (!arquivoEntrada) {
        cerr << "Aluno nÃ£o cadastrado!" << endl;
        return;
    }

    ofstream arquivo(nomeAluno + ".txt", ios::app);
    if (arquivo) {
        arquivo << fixed << setprecision(2) << nota << endl;
        cout << "Nota adicionada com sucesso!" << endl;
    } else {
        cerr << "Erro ao adicionar a nota!" << endl;
    }
}

void calcularMedia() {
    string nomeAluno;
    cout << "Digite o nome do aluno: ";
    cin >> nomeAluno;

    ifstream arquivo(nomeAluno + ".txt");
    if (!arquivo) {
        cerr << "Aluno nÃ£o cadastrado!" << endl;
        return;
    }

    string linha;
    vector<double> notas;
    bool primeiraLinha = true;
    while (getline(arquivo, linha)) {
        if (primeiraLinha) {
            primeiraLinha = false;
            continue; // Ignorar a linha de matrÃ­cula
        }
        double nota;
        stringstream ss(linha);
        ss >> nota;
        notas.push_back(nota);
    }

    if (notas.empty()) {
        cout << "Nenhuma nota cadastrada para o aluno." << endl;
        return;
    }

    double soma = 0;
    for (double n : notas) {
        soma += n;
    }
    double media = soma / notas.size();
    cout << "MÃ©dia do aluno " << nomeAluno << " Ã©: " << fixed << setprecision(2) << media << endl;
}

int main() {
    int opcao;

    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Cadastrar aluno" << endl;
        cout << "2. Adicionar nota de um aluno" << endl;
        cout << "3. Calcular mÃ©dia de um aluno" << endl;
        cout << "4. Fechar o programa" << endl;
        cout << "Digite a sua escolha: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cadastrarAluno();
                break;
            case 2:
                adicionarNota();
                break;
            case 3:
                calcularMedia();
                break;
            case 4:
                cout << "Encerrando o programa..." << endl;
                return 0;
            default:
                cerr << "OpÃ§Ã£o invÃ¡lida! Tente novamente." << endl;
        }
    }

    return 0;
}