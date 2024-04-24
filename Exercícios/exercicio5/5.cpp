#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));
    
    char dnv;
    do {
        int numeroAleatorio = rand() % 1000 + 1;
        int palpite;
        
        cout << "Seguinte meu parceiro, tenho um jogo pra voce, vou 'pensar' em um numero entre 1 e 1000, e voce precisa adivinhar!" << endl;
        cout << "Digite seu primeiro palpite: ";
        
        while (true) {
            cin >> palpite;
            
            if (palpite == numeroAleatorio) {
                cout << "Parabens! Voce adivinhou o numero!" << endl;
                cout << "Gostaria de jogar novamente? (s ou n)(minusculo) ";
                cin >> dnv;
                if (dnv != 's') {
                    cout << "Muito obrigadi viu chefe!";
                    break;
                } else {
                    numeroAleatorio = rand() % 1000 + 1;
                }
            } else if (palpite < numeroAleatorio) {
                cout << "Muito baixo. Tente novamente." << endl;
            } else {
                cout << "Muito alto. Tente novamente." << endl;
            }
        }
    } while (dnv == 's');
    
    return 0;
}
