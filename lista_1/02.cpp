#include <iostream>
#include <stdlib.h>
using namespace std;

int somatoria(int n) {
    int res;

    // Caso base: n é igual a 1, fim da soma.
    if (n == 1) {
        return 1;
    }

    // Recursão: n será repetidamente somado com n-1 até n-1 == 1.
    // Esse algoritmo pode ser pensado como contar de "trás pra frente".
    // Ex: 5 + 4 + 3 + 2 + 1
    res = n + somatoria(n-1);
    return res;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n;

    while (true) {
        cout << "Insira um n inteiro positivo maior que 0: ";
        cin >> n;

        if (n > 0) {
            break;
        }
    }

    cout << "Somatória = " << somatoria(n) << endl;

    return 0;
}

