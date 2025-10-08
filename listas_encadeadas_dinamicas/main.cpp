#include <iostream>
#include <stdlib.h>
using namespace std;

struct elemento {
    int valor;
    elemento *prox;
};

struct lista {
    int comprimento;
    int total;
    elemento *ini;
};

void inicializa_lista(lista *lis) {
    lis->comprimento = 0;
    lis->total = 0;
    lis->ini = NULL;
}

elemento* cria_elemento(int val) {
    elemento *ptr;

    ptr = (elemento*) malloc(sizeof(elemento));
    if (ptr != NULL) {
        ptr->valor = val;
        ptr->prox = NULL;
    }

    return ptr;
}

void insere_elemento(lista *lis, int val) {
    elemento *ptr;

    ptr = cria_elemento(val);

    ptr->prox = lis->ini;
    lis->ini = ptr;

    lis->comprimento++;
    lis->total += val;
}

lista lista1, lista2;
int opc;
int main() {
    setlocale(LC_ALL, "Portuguese");

    inicializa_lista(&lista1);
    inicializa_lista(&lista2);

    cout << "*Existem duas listas criadas na memória. Para algumas operações é necessário informar qual lista deverá ser utilizada.";
    cout << " Outras operações utilizarão as duas listas simultaneamente" << endl;

    cout << endl << "--------------- TESTE DE OPERAÇÕES COM LISTAS ---------------" << endl;
    cout << "1 - Inserir em lista (Lista 1 ou Lista 2)" << endl;
    cout << "2 - Remover da lista (Lista 1 ou Lista 2)" << endl;
    cout << "3 - Imprimir as listas" << endl;
    cout << "4 - Calcular o comprimento das listas" << endl;
    cout << "5 - Contar ocorrências de um número em uma lista (Lista 1 ou Lista 2)" << endl;
    cout << "6 - Substituição de ocorrências de um número em uma lista (Lista 1 ou Lista 2)" << endl;
    cout << "7 - Dividir uma lista em duas (Lista 1 ou Lista 2)" << endl;
    cout << "8 - Intersecção das listas" << endl;
    cout << "0 - Sair" << endl;
    cout << "Opção: ";

    cin >> opc;


    return 0;
}
