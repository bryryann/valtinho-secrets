#include <iostream>
#include <stdlib.h>
using namespace std;

void trocar_valores(int *a, int *b);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int a, b;

    cout << "Insira um valor inteiro para a: ";
    cin >> a;

    cout << "Insira um valor inteiro para b: ";
    cin >> b;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    trocar_valores(&a, &b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}

void trocar_valores(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
