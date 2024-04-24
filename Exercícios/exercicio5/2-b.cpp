#include <iostream>
using namespace std;

bool ehPrimo(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= num; ++i)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main() {
    cout << "Numeros primos de 0 a 1000:" << endl;
    for (int i = 0; i <= 1000; ++i) {
        if (ehPrimo(i))
            cout << i << endl;
    }
    cout << endl;
    return 0;
}