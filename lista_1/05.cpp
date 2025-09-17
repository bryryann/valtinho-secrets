#include <iostream>
#include <stdlib.h>
using namespace std;

int n;
int main() {
    setlocale(LC_ALL, "Portuguese");

    while (true) {
        cout << "Insira um valor inteiro não negativo para N: ";
        cin >> n;

        if (n > 0) {
            break;
        }
    }

    int *V = (int*) malloc(sizeof(int) * n);
    for (int cont = 0; cont < n; cont++) {
        while (true) {
            cout << "Insira o valor de V[" << cont << "] sendo maior ou igual a 2: ";
            cin >> V[cont];

            if (V[cont] >= 2) {
                break;
            }
        }
    }

    return 0;
}
