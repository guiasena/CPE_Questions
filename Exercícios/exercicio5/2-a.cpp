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

int main()
{
    int numero;
    cout << "Insira um numero: ";
    cin >> numero;

    if (ehPrimo(numero))
    {
        cout << "O numero inserido eh primo";
    }
    else
    {
        cout << "O numero inserido nao eh primo";
    }
    return 0;
}