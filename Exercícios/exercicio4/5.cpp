#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Digite 5 números entre 1 e 30: ";
    
    for (int i = 0; i < 5; ++i) {
        cin >> numero;
        for (int j = 0; j < numero; ++j) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}