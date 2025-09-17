#include <iostream>
#include <stdlib.h>
using namespace std;

int* aloc_vetor(int tam) {
    if (tam <= 0) {
        return NULL;
    }

    int *ptr = (int *) malloc(sizeof(int) * tam);
    return ptr;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int *v = aloc_vetor(5);

    free(v);
    return 0;
}
