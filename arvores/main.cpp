#include "lib/arvores.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    Arvore arv;

    inicializar_lista(&arv);

    inserir_ordenado(&arv, arv.raiz, 6);
    inserir_ordenado(&arv, arv.raiz, 5);
    inserir_ordenado(&arv, arv.raiz, 8);
    inserir_ordenado(&arv, arv.raiz, 4);
    inserir_ordenado(&arv, arv.raiz, 7);
    inserir_ordenado(&arv, arv.raiz, 11);
    inserir_ordenado(&arv, arv.raiz, 10);
    inserir_ordenado(&arv, arv.raiz, 2);
    inserir_ordenado(&arv, arv.raiz, 12);
    inserir_ordenado(&arv, arv.raiz, 1);
    inserir_ordenado(&arv, arv.raiz, 3);
    inserir_ordenado(&arv, arv.raiz, 9);

    imprime_arvore(arv.raiz, "CEN");

    return 0;
}

