#include <iostream>
#include <stdlib.h>
using namespace std;

int soma_dobro(int *a, int *b);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int a, b;

    cout << "Insira um valor inteiro para a: ";
    cin >> a;

    cout << "Insira um valor inteiro para b: ";
    cin >> b;

    cout << endl;
    cout << "Dobro de a: " << a * 2 << endl;
    cout << "Dobro de b: " << b * 2 << endl;
    cout << "Soma do dobro: " << soma_dobro(&a, &b) << endl;

    return 0;
}

int soma_dobro(int *a, int *b) {
    *a = (*a) * 2;
    *b = (*b) * 2;

    return *a + *b;
}
