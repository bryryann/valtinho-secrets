#include <iostream>
#include <stdlib.h>
using namespace std;

int ord_variaveis(int *a, int *b, int *c);
void trocar(int *x, int *y);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int a, b, c;

    cout << "Insira um valor inteiro para a: ";
    cin >> a;

    cout << "Insira um valor inteiro para b: ";
    cin >> b;

    cout << "Insira um valor inteiro para c: ";
    cin >> c;

    ord_variaveis(&a, &b, &c);

    cout << endl;
    cout << "a (menor): " << a << endl;
    cout << "b (medio): " << b << endl;
    cout << "c (maior): " << c << endl;

    return 0;
}

int ord_variaveis(int *a, int *b, int *c) {
    if (*a == *b && *a == *c) {
        return 1;
    }

    if (*a > *b) {
        trocar(a, b);
    }

    if (*b > *c) {
        trocar(b, c);
    }

    if (*a > *b) {
        trocar(a, b);
    }

    return 0;
}

void trocar(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}
