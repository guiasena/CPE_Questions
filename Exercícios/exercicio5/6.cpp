#include <bits/stdc++.h>
using namespace std;

void hanoi(int n, char source, char posicao, char auxiliary) {
    if (n == 1) {
        cout << "Mova o disco 1 da torre " << source << " para a torre " << posicao << "\n";
        return;
    }
    hanoi(n - 1, source, auxiliary, posicao);
    cout << "Mova o disco " << n << " da torre " << source << " para a torre " << posicao << "\n";
    hanoi(n - 1, auxiliary, posicao, source);
}

int main() {
    int num_discos = 3; 
    hanoi(num_discos, 'A', 'C', 'B');
    return 0;
}