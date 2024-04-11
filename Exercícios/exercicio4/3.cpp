#include <iostream>
using namespace std;

int main() {
    //Triplos de pitágoras!
    const int max_size = 20;

    cout << "Estes sao os triplos pitagoricos ate 20:\n";

    for (int lado1 = 1; lado1 <= max_size; ++lado1) {
        for (int lado2 = lado1; lado2 <= max_size; ++lado2) {
            for (int hipotenusa = lado2; hipotenusa <= max_size; ++hipotenusa) {
                if (lado1 * lado1 + lado2 * lado2 == hipotenusa * hipotenusa) {
                    cout << "(" << lado1 << ", " << lado2 << ", " << hipotenusa << ")\n";
                }
            }
        }
    }

    return 0;
}