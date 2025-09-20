#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vet[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++) {
        cout << "vet[" << i << "]: " << *(vet+i) << endl;
    }

    return 0;
}
