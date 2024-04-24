#include <iostream>
#include <cmath>
using namespace std;

bool ehPrimo(int n1){
    if (n1 <= 1) 
        return false;
    for (int i = 2; i <= sqrt(n1); i++) { 
        if (n1 % i == 0) 
            return false;
    }
    return true; 
}

int main(){
    cout << "Numeros primos entre 2 e 1000:" << endl;
    for (int i = 2; i <= 1000; i++) {
        if (ehPrimo(i))
            cout << i << " ";
    }
    return 0;
}