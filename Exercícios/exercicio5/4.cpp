#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int geraQuestao() {
    srand(time(nullptr)); 

    int numero1 = rand() % 11;
    int numero2 = rand() % 11;

    cout << "Bem vindo ao modulo de multiplicacao!" << endl;
    cout << "=====================================" << endl << "\n";
    cout << "Qual eh o resultado do produto entre " << numero1 << " e " << numero2 << "?" << endl;

    return numero1 * numero2;
}
int main() { 
    int boa = 0;
    srand(time(0)); 
    
    while (true) {
        int respostaEsperada = geraQuestao();
        int respostaDoUsuario;
        
        cin >> respostaDoUsuario;
        
        if (respostaDoUsuario == respostaEsperada) {
            cout << "Muito bom!" << endl;
            boa++;
        } else {
            cout << "Não. Por favor, tente novamente." << endl;
        }
        
        char play_again;
        cout << "continuar? (s/n): ";
        cin >> play_again;
        if (play_again != 's' && play_again != 'S') {
            break;
        }
    }
    
    cout << "voce acertou " << boa << " perguntas." << endl;
    
    return 0;
}