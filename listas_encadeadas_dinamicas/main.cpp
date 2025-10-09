#include <iostream>
#include <stdlib.h>
using namespace std;

struct elemento {
    int valor;
    int chave;
    elemento *prox;
};

struct lista {
    int comprimento;
    int total;
    elemento *ini;
};

void inicializar_lista(lista *lis) {
    lis->comprimento = 0;
    lis->total = 0;
    lis->ini = NULL;
}

elemento* criar_elemento(int val, int chave) {
    elemento *ptr;

    ptr = (elemento*) malloc(sizeof(elemento));
    if (ptr != NULL) {
        ptr->valor = val;
        ptr->chave = chave;
        ptr->prox = NULL;
    }

    return ptr;
}

void inserir_elemento(lista *lis, int val, int chave) {
    elemento *ptr;

    ptr = criar_elemento(val, chave);

    ptr->prox = lis->ini;
    lis->ini = ptr;

    lis->comprimento++;
    lis->total += val;
}

void imprimir_valores(elemento *elem) {
    if (elem) {
        cout << "Elemento (" << elem->chave << "): " << elem->valor << endl;
        imprimir_valores(elem->prox);
    }
}

void imprimir_lista(lista *lis) {
    if (lis->ini) {
        imprimir_valores(lis->ini);
    }
    else {
        cout << "A lista está vazia" << endl;
    }
}

int escolher_lista() {
    int escolha;

    do {
        cout << "Escolha quais das listas deseja: " << endl;
        cout << "[1] Lista 1 | [2] Lista 2" << endl;
        cout << "> ";
        
        cin >> escolha;
    } while (escolha != 1 && escolha != 2);

    return escolha;
}

lista lista1, lista2;
int opcao, lista_escolhida, valor, chave1, chave2;
int main() {
    setlocale(LC_ALL, "Portuguese");

    chave1 = 0;
    chave2 = 0;
    inicializar_lista(&lista1);
    inicializar_lista(&lista2);

    cout << "*Existem duas listas criadas na memória. Para algumas operações é necessário informar qual lista deverá ser utilizada.";
    cout << " Outras operações utilizarão as duas listas simultaneamente" << endl;

    do {
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

        cin >> opcao;

        switch (opcao) {
            case 1:
                lista_escolhida = escolher_lista();

                cout << "Digite o valor que deseja inserir: ";
                cin >> valor;

                if (lista_escolhida == 1) {
                    inserir_elemento(&lista1, valor, chave1);
                    chave1++;
                }
                else {
                    inserir_elemento(&lista2, valor, chave2);
                    chave2++;
                }

                break;
            case 3:
                cout << "\n----- Lista 1 -----" << endl;
                imprimir_lista(&lista1);
                cout << endl;

                cout << "----- Lista 2 -----" << endl;
                imprimir_lista(&lista2);
                cout << endl;

                break;
            case 0:
                cout << "\nEncerrando o programa..." << endl;
                break;
            default:
                cout << "\nOpção inválida. Tente novamente" << endl;
        }

    } while (opcao != 0);

    return 0;
}
