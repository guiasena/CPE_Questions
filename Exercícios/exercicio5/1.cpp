#include<iostream>
#include<iomanip>
using namespace std;

int main () {
    cout << "Conversor celsius para fahrenheit: \n ===================" << endl;
    cout << fixed << setprecision(2);
    for (float celsius = 0; celsius < 100; celsius++) {
        float fahrenheit = 9 / 5 * celsius + 32;
        cout << celsius << "C " << "- " << fahrenheit << "F "<< endl;
    }
}

