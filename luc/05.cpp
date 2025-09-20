#include <iostream>
#include <stdlib.h>
using namespace std;

void ord_maior(int *a, int *b);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int a, b;

    cout << "Insira um valor inteiro para a: ";
    cin >> a;

    cout << "Insira um valor inteiro para b: ";
    cin >> b;

    ord_maior(&a, &b);

    cout << "MAIOR VARIÁVEL | a = " << a << endl;
    cout << "MENOR VARIÁVEL | b = " << b << endl;

    return 0;
}

void ord_maior(int *a, int *b) {
    if (*a >= *b) {
        return;
    }

    int tmp = *a;
    *a = *b;
    *b = tmp;
}
