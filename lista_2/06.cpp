#include <iostream>
#include <stdlib.h>
using namespace std;

double soma_serie_recursiva(int n) {
    double res;

    if (n == 1) {
        cout << "2/4 = ";
        res = 2.0/4.0;
    }
    else {
        cout << ((n*n) + 1) << "/" << (n + 3) << " + ";
        res = ((n*n) + 1)/(n + 3.0) + soma_serie_recursiva(n-1);
    }

    return res;
}

int n;
double soma;
int main() {
    setlocale(LC_ALL, "Portuguese");

    cout << "Insira um valor inteiro positivo para n: ";
    cin >> n;

    soma = soma_serie_recursiva(n);
    cout << soma << endl;

    return 0;
}
