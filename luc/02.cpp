#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int a = 1, b = 2;
    int *ptr_a, *ptr_b;

    ptr_a = &a;
    ptr_b = &b;

    cout << "end. a = " << ptr_a << endl;
    cout << "end. b = " << ptr_b << endl;

    if (ptr_a > ptr_b) {
        cout << endl << "maior endereço: a = " << ptr_a << endl;
    }
    else {
        cout << endl << "maior endereço: b = " << ptr_b << endl;
    }

    return 0;
}
