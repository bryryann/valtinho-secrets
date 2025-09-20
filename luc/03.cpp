#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int a, b;
    int *ptr_a = &a;
    int *ptr_b = &b;

    cout << "Insira o valor de a: ";
    cin >> a;

    cout << "Insira o valor de b: ";
    cin >> b;

    cout << "end. a = " << ptr_a << endl;
    cout << "end. b = " << ptr_b << endl;

    if (&a > &b) {
        cout << "MAIOR ENDEREÇO | variável: a | endereço: " << ptr_a << " | valor: " << a << endl;
    }
    else {
        cout << "MAIOR ENDEREÇO | variável: b | endereço: " << ptr_b << " | valor: " << b << endl;
    }

    return 0;
}
