#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

void somar(const string& inputFile, const string& outputFile) {

    ifstream inFile(inputFile);
    ofstream outFile(outputFile);

    string line;

    while (getline(inFile, line)) {
        stringstream ss(line);
        int num;
        int soma = 0;

        while (ss >> num) {
            soma += num;
        }
        outFile << soma << endl;
    }
    inFile.close();
    outFile.close();
}

int main() {
    somar("vetores.txt", "soma.txt");
    return 0;
}
