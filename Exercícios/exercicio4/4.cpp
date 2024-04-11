#include <iostream>
using namespace std;

int main() {
    //Cálculo de vendas
    const double prod1 = 2.98;
    const double prod2 = 4.50;
    const double prod3 = 9.98;
    const double prod4 = 4.49;
    const double prod5 = 6.87;

    int a, b;
    double valorTotal = 0.0;

    while (true) {
        cout << "---------------------\n1. Produto 1 = R$2.98\n2. Produto 2 = R$4.50\n3. Produto 3 = R$9.98\n4. Produto 4 = R$4.49\n5. Produto 5 = R$6.87\n---------------------\nDigite o numero do produto ou digite '0' para sair!:";
        cin >> a;

        if (a == 0) {
            cout << "Volte sempre!";
            break;
            return 0;
        }

        cout << "Digite a quantidade vendida: ";
        cin >> b;

        double precoVarejo = 0.0;
        switch (a) {
            case 1:
                precoVarejo = prod1;
                break;
            case 2:
                precoVarejo = prod2;
                break;
            case 3:
                precoVarejo = prod3;
                break;
            case 4:
                precoVarejo = prod4;
                break;
            case 5:
                precoVarejo = prod5;
                break;
            default:
                cout << "Número de produto inválido. Tente novamente.\n";                
        }

        double valorProduto = precoVarejo * b;
        valorTotal += valorProduto;
        cout << "Valor total de varejo de todos os produtos vendidos: R$ " << valorTotal << "\n";
    }

    return 0;
}
