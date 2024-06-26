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
    } while(escolha == 's' || escolha == 'S');
}

// EXIBIR O RAMAL INTEIRO
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

// EXIBIR A LISTA DE NUMERO DE RAMAL
void exibirNumeroDeRamal (const vector<Ramal> &listaRamais) {
    if (listaRamais.empty()) {
        cout << "Nenhum ramal cadastrado." << endl;
        return;
    }
    cout << "LISTA DE RAMAIS: \n" << endl;
    for (const auto &ramal : listaRamais) {
        cout << ramal.numeroRamal << endl;
    }
}

// EXIBIR A LISTA DE SETORES
void exibirSetor (const vector<Ramal> &listaRamais) {
    if (listaRamais.empty()) {
        cout << "Nenhum ramal cadastrado." << endl;
        return;
    }
    cout << "LISTA DE SETORES: \n" << endl;
    for (const auto &ramal : listaRamais) {
        cout << ramal.setor << endl;
    }
}

// EXIBIR A LISTA DE EDIFICIOS
void exibirEdificio (const vector<Ramal> &listaRamais) {
    if (listaRamais.empty()) {
        cout << "Nenhum ramal cadastrado." << endl;
        return;
    }
    cout << "LISTA DE EDIFICIOS: \n" << endl;
    for (const auto &ramal : listaRamais) {
        cout << ramal.edificio << endl;
    }
}

// EXIBIR A LISTA DE RESPONSAVEIS POR RAMAL
void exibirResponsavelRamal (const vector<Ramal> &listaRamais) {
    if (listaRamais.empty()) {
        cout << "Nenhum ramal cadastrado." << endl;
        return;
    }
    cout << "LISTA DE RESPONSAVEIS POR RAMAL: \n" << endl;
    for (const auto &ramal : listaRamais) {
        cout << ramal.responsavelRamal << endl;
    }
}

// EXIBIR A LISTA DE RESPONSAVEIS POR ATESTE
void exibirResponsavelAteste (const vector<Ramal> &listaRamais) {
    if (listaRamais.empty()) {
        cout << "Nenhum ramal cadastrado." << endl;
        return;
    }
    cout << "LISTA DE RESPONSAVEIS POR ATESTE: \n" << endl;
    for (const auto &ramal : listaRamais) {
        cout << ramal.responsavelAteste << endl;
    }
}

// FUNÇÃO PARA PROCURAR RAMAIS COM O DADO NUMERO DE RAMAL
void pesquisaPorNumeroDeRamal (const vector<Ramal> &listaRamais, int num) {
    int contador = 0;
    vector<const Ramal*> ramaisEncontrados;
    for (const auto &ramal : listaRamais) {
        if (ramal.numeroRamal == num) {
            ramaisEncontrados.push_back(&ramal); // Armazena o endereço do ramal encontrado
            exibirRamal(ramal); // Mostrar o ramal encontrado inteiramente
            contador++;
        }
    }
    if (contador == 0) {
        cout << "Nenhum ramal encontrado." << endl;
    }
}

// FUNÇÃO PARA PROCURAR RAMAIS COM O DADO SETOR
void pesquisaPorSetor (const vector<Ramal> &listaRamais, string set) {
    int contador = 0;
    vector<const Ramal*> ramaisEncontrados;
    for (const auto &ramal : listaRamais) {
        if (ramal.setor == set) {
            ramaisEncontrados.push_back(&ramal); 
            exibirRamal(ramal);
            contador++;
        }
    }
    if (contador == 0) {
        cout << "Nenhum ramal encontrado." << endl;
    }
}

// FUNÇÃO PARA PROCURAR RAMAIS COM O DADO EDIFICIO
void pesquisaPorEdificio (const vector<Ramal> &listaRamais, int edi) {
    int contador = 0;
    vector<const Ramal*> ramaisEncontrados;
    for (const auto &ramal : listaRamais) {
        if (ramal.edificio == edi) {
            ramaisEncontrados.push_back(&ramal); 
            exibirRamal(ramal);
            contador++;
        }
    }
    if (contador == 0) {
        cout << "Nenhum ramal encontrado." << endl;
    }
}

// FUNÇÃO PARA PROCURAR RAMAIS COM O DADO RESPONSAVEL POR RAMAL
void pesquisaPorResponsavelRamal (const vector<Ramal> &listaRamais, string resRam) {
    int contador = 0;
    vector<const Ramal*> ramaisEncontrados;
    for (const auto &ramal : listaRamais) {
        if (ramal.responsavelRamal == resRam) {
            ramaisEncontrados.push_back(&ramal); 
            exibirRamal(ramal);
            contador++;
        }
    }
    if (contador == 0) {
        cout << "Nenhum ramal encontrado." << endl;
    } 
}

// FUNÇÃO PARA PROCURAR RAMAIS COM O DADO RESPONSAVEL POR ATESTE
void pesquisaPorResponsavelAteste (const vector<Ramal> &listaRamais, string resAte) {
    int contador = 0;
    vector<const Ramal*> ramaisEncontrados;
    for (const auto &ramal : listaRamais) {
        if (ramal.responsavelAteste == resAte) {
            ramaisEncontrados.push_back(&ramal); 
            exibirRamal(ramal);
            contador++;
        }
    }
    if (contador == 0) {
        cout << "Nenhum ramal encontrado." << endl;
    } 
}

int main () {
    vector<Ramal> listaRamais;
    char resposta;
    cadastro(listaRamais);
    do {
        cout << "__________PESQUISA DE RAMAIS__________" << endl;
        cout << "SELECIONE A FORMA DE PESQUISA QUE DESEJA UTILIZAR: " << endl;
        cout << "PRESSIONE 0 para: numero do ramal." << endl;
        cout << "PRESSIONE 1 para: setor." << endl;
        cout << "PRESSIONE 2 para: edificio." << endl;
        cout << "PRESSIONE 3 para: responsavel pelo ramal." << endl;
        cout << "PRESSIONE 4 para: responsavel pelo ateste." << endl;
        cout << "PRESSIONE 5 para: sair do programa." << endl;
        cin >> resposta;

        switch (resposta) {
            case '0': {
                exibirNumeroDeRamal(listaRamais);
                int numero;
                cout << "Digite o numero do ramal que deseja pesquisar: " << endl;
                cin >> numero;
                pesquisaPorNumeroDeRamal(listaRamais, numero);
                break;
            }               
            case '1': {
                exibirSetor(listaRamais);
                string setor;
                cout << "Digite o nome do setor que deseja pesquisar: " << endl;
                cin >> setor;
                pesquisaPorSetor(listaRamais, setor);
                break;
            }               
            case '2': {
                exibirEdificio(listaRamais);
                int edificio;
                cout << "Digite o numero do edificio que deseja pesquisar: " << endl;
                cin >> edificio;
                pesquisaPorEdificio(listaRamais, edificio);
                break;
            }       
            case '3': {
                exibirResponsavelRamal(listaRamais);
                string responsavelRamal;
                cout << "Digite o nome do responsavel pelo ramal que deseja pesquisar: " << endl;
                cin >> responsavelRamal;
                pesquisaPorResponsavelRamal(listaRamais, responsavelRamal);
                break;
            }
            case '4': {
                exibirResponsavelAteste(listaRamais);
                string responsavelAteste;
                cout << "Digite o nome do responsavel pelo ateste que deseja pesquisar: " << endl;
                cin >> responsavelAteste;
                pesquisaPorResponsavelAteste(listaRamais, responsavelAteste);
                break;
            }  
            case '5': {
                cout << "Obrigado por utilizar a Sena's Program!";
                break;
            }  
            default: {
                cout << "Opcao invalida.";
                break;
            }   
        }
    } while (resposta != '5');
}