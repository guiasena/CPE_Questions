#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct Ramal {
    int numeroRamal;
    int categoria;
    int edificio;
    int sala;
    string setor;
    string responsavelRamal;
    string responsavelAteste;
};

void cadastro (vector<Ramal> &listaRamais) {
    char escolha;
    do {
        Ramal ramalCadastro;
        // Numero do ramal;
        cout << "Digite o numero do ramal: ";
        cin >> ramalCadastro.numeroRamal;
        if (ramalCadastro.numeroRamal < 1000 || ramalCadastro.numeroRamal > 2999) {
            cout << "ENTRADA INVALIDA" << endl;
            continue;
        }

        // Categoria;
        cout << "Digite a categoria: ";
        cin >> ramalCadastro.categoria;
        if (ramalCadastro.categoria < 0 || ramalCadastro.categoria > 6) {
            cout << "ENTRADA INVALIDA" << endl;
            continue;
        }

        // Setor;
        cout << "Digite o nome do setor: ";
        cin >> ramalCadastro.setor;
        if (ramalCadastro.setor != "setel" && ramalCadastro.setor != "diben" && ramalCadastro.setor != "protocolo" && ramalCadastro.setor != "patrimonio") {
            cout << "ENTRADA INVALIDA" << endl;
            continue;
        }

        // Edificio de localização;
        cout << "Digite o numero do edificio: ";
        cin >> ramalCadastro.edificio;
        if (ramalCadastro.edificio != 500 && ramalCadastro.edificio != 505) {
            cout << "ENTRADA INVALIDA" << endl;
            continue;
        }

        // Sala;
        cout << "Digite o numero da sala: ";
        cin >> ramalCadastro.sala;
        if (ramalCadastro.sala < 100 || ramalCadastro.sala > 999) {
            cout << "ENTRADA INVALIDA" << endl;
            continue;
        }

        // Responsavel pelo ramal;
        cout << "Digite o nome do responsavel pelo ramal: ";
        cin >> ramalCadastro.responsavelRamal;

        cout << "Digite o nome do responsavel pelo ateste: ";
        cin >> ramalCadastro.responsavelAteste;

        listaRamais.push_back(ramalCadastro);

        cout << "Ramal cadastrado!\n Deseja cadastrar outro ramal? (s/n)" << endl;
        cin >> escolha;
    } while (escolha == 's' || escolha == 'S');
}

void exibirRamal (const Ramal &ramal) {
    cout << "__________INFORMACOES GERAIS DO RAMAL__________" << endl;
    cout << "Ramal: " << ramal.numeroRamal << endl;
    cout << "Categoria: " << ramal.categoria << endl;
    cout << "Setor: " << ramal.setor << endl;
    cout << "Edificio: " << ramal.edificio << endl;
    cout << "Sala: " << ramal.sala << endl;
    cout << "Responsavel pelo ramal: " << ramal.responsavelRamal << endl;
    cout << "Responsavel pelo ateste: " << ramal.responsavelAteste << endl;
}

void exibirTodosRamais(const vector<Ramal> &listaRamais) {
    for (const auto &ramal : listaRamais) {
        exibirRamal(ramal);
    }
}

int main() {
    vector<Ramal> listaRamais;
    
    cadastro(listaRamais);
    
    exibirTodosRamais(listaRamais);
    
    return 0;
}
