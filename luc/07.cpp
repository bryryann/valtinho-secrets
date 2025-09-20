#include <iostream>
#include <stdlib.h>
using namespace std;

void soma_nums(int *a, int b);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int a, b;

    cout << "Insira o valor de a: ";
    cin >> a;

    cout << "Insira o valor de b: ";
    cin >> b;

    soma_nums(&a, b);

    cout << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}

void soma_nums(int *a, int b) {
    *a = (*a) + b;
}
