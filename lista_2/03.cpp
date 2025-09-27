#include <iostream>
#include <stdlib.h>
using namespace std;

int soma_incrementos(int a, int b) {
    int res;

    if (b == 0) {
        cout << a << " = ";
        res = a;
    }
    else {
        cout << "1 + ";
        res = 1 + soma_incrementos(a, b-1);
    }

    return res;
}

int a, b, soma;
int main() {
    setlocale(LC_ALL, "Portuguese");

    cout << "Digite um valor natural para A: ";
    cin >> a;

    cout << "Digite um valor natural para B: ";
    cin >> b;

    soma = soma_incrementos(a, b);
    cout << soma << endl;

    return 0;
}
