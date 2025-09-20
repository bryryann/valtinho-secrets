#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int *vet = (int*) malloc(sizeof(int) * 5);

    for (int i = 0; i < 5; i++) {
        cout << "Insira o valor de vet[" << i << "]: ";
        cin >> *(vet+i);
    }

    cout << endl;
    cout << "VALORES PARES: " << endl;
    for (int i = 0; i < 5; i++) {
        if (*(vet+i) % 2 == 0) {
            cout << "end. de [" << i << "]: " << vet+i << endl;
        }
    }

    return 0;
}
