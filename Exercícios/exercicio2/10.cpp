#include <iostream>
#include <cstring> // tive que adicionar para ter o tamanho da string
using namespace std;

int main() {
	// Guilherme Araujo Sena || 241008602 || Turma 01
    char palavra[6]; 
    char vogais[] = "aeiouAEIOU"; 
    int contadorVogais = 0;

    cout << "Digite uma palavra com ate 5 caracteres: ";
    cin >> palavra;

    for (int i = 0; i < strlen(palavra); i++) {
        if (strchr(vogais, palavra[i])) {
            contadorVogais++;
        }
    }

    cout << "Quantidade de vogais na palavra: " << contadorVogais << endl;
    for (int i = 0; i < strlen(palavra); i++) { // strlen só foi possível por causa da biblioteca
        switch (palavra[i]) {
            case 'a':
                palavra[i] = 'i';
                break;
            case 'e':
                palavra[i] = 'o';
                break;
            case 'i':
                palavra[i] = 'u';
                break;
        }
    }

    cout << "Palavra com letras trocadas: " << palavra << endl;

    return 0;
}

