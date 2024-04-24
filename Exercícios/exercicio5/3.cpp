#include <iostream>
using namespace std;

bool perfect(int num) {
    int soma = 0;
    for (int i = 1; i < num; ++i) {
        if (num % i == 0) {
            soma
     += i;
        }
    }
    return  soma == num;
}

int main() {
    cout << "estes sao os numeros perfeitos entre 1 e 1000:" << endl;
    for (int i = 1; i <= 1000; ++i) {
        if (perfect(i)) {
            cout << i << ": ";
            for (int j = 1; j < i; ++j) {
                if (i % j == 0) {
                    cout << j;
                    if (j != i - 1) {
                        cout << " + ";
                    }
                }
            }
            cout << endl;
        }
    }
    return 0;
}
