#include <iostream>
#include <stdlib.h>
using namespace std;

int *combinar_vetor(int A[], int B[], int tam) {
    int *C = (int *) malloc(sizeof(int) * tam);

    for (int cont = 0; cont < tam; cont++) {
        C[cont] = A[cont] + B[cont];
    }

    return C;
}

int main() {
    int A[] = {1, 2, 3, 4, 5};
    int B[] = {10, 20, 30, 40, 50};
    int tam = 5;

    int *C = combinar_vetor(A, B, tam);

    cout << "Vetor combinado: " << endl;
    for (int cont = 0; cont < tam; cont++) {
        cout << *(C+cont) << " ";
    }
    cout << endl;

    free(C);
    return 0;
}
