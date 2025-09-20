#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    float vet[10] = {0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0};

    for (int i = 0; i < 10; i++) {
        cout << "end. de vet[" << i << "]: " << &vet[i] << endl;
    }

    return 0;
}
