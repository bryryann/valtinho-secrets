#include <iostream>
#include <stdlib.h>
using namespace std;

double soma_inversos(int n) {
    double res;

    if (n == 1) {
        cout << "1 = ";
        res = 1;
    }
    else {
        cout << "1/" << n << " + ";
        res = 1.0/n + soma_inversos(n-1);
    }

    return res;
}

double soma;
int n;
int main() {
    setlocale(LC_ALL, "Portuguese");

    cout << "Digite um número inteiro positivo para N: ";
    cin >> n;

    soma = soma_inversos(n);
    cout << soma << endl;

    return 0;
}
