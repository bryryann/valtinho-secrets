#include <iostream>
#include <stdlib.h>
using namespace std;

float potencia(float base, float expoente) {
    float res;

    // Caso base: qualquer número elevado a 0 é 1.
    if (expoente == 0) {
        return 1;
    }

    // Caso base: qualquer número elevado a 1 é ele mesmo.
    if (expoente == 1) {
        return base;
    }

    // Expoente positivo -> multiplicações recursivas
    // Expoente negativo -> inverte a base e chama recursivamente
    if (expoente > 0) {
        res = base * potencia(base, expoente-1);
    }
    else {
        res = 1 / potencia(base, -expoente);
    }

    return res;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int a, b;

    cout << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    cout << potencia(a, b) << endl;

    return 0;
}
