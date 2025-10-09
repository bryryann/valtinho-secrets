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

//
// 1
//
void inserir_elemento(lista *lis, int val, int chave) {
    elemento *ptr;

    ptr = criar_elemento(val, chave);

    ptr->prox = lis->ini;
    lis->ini = ptr;

    lis->comprimento++;
    lis->total += val;
}

//
// 2
//
elemento* remover_elemento(lista *lis, elemento *elem, int val) {
    elemento *ret = NULL;

    if (elem != NULL) {
        if (lis->ini != NULL && lis->ini->valor == val) {
            ret = elem;
            lis->ini = lis->ini->prox;

            lis->comprimento--;
            lis->total -= ret->valor;
        }
        else {
            if (elem->prox != NULL && elem->prox->valor == val) {
                ret = elem->prox;

                elem->prox = elem->prox->prox;

                lis->comprimento--;
                lis->total -= ret->valor;
            }
            else {
                ret = remover_elemento(lis, elem->prox, val);
            }
        }
    }

    return ret;
}

void imprimir_valores(elemento *elem) {
    if (elem) {
        cout << "Elemento (" << elem->chave << "): " << elem->valor << endl;
        imprimir_valores(elem->prox);
    }
}

//
// 3
//
void imprimir_lista(lista *lis) {
    if (lis->ini) {
        imprimir_valores(lis->ini);
    }
    else {
        cout << "A lista está vazia" << endl;
    }
}

//
// 5
//
int contar_mesma_ocorrencia(elemento *elem, int val) {
    int ret;
    int aux_contador;

    if (elem == NULL) {
        ret = 0;
    }
    else {
        if (elem->valor == val) {
            aux_contador = 1;
        }
        else {
            aux_contador = 0;
        }

        ret = aux_contador + contar_mesma_ocorrencia(elem->prox, val);
    }

    return ret;
}

//
// 6
//
void substituir_ocorrencias(elemento *elem, int valor_procurado, int valor_novo) {
    if (elem != NULL) {
        if (elem->valor == valor_procurado) {
            elem->valor = valor_novo;
        }

        substituir_ocorrencias(elem->prox, valor_procurado, valor_novo);
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
int opcao, lista_escolhida, valor, subs, chave1, chave2;
elemento *aux;
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
            case 2:
                lista_escolhida = escolher_lista();

                cout << "Digite o valor que deseja remover: ";
                cin >> valor;

                if (lista_escolhida == 1) {
                    aux = remover_elemento(&lista1, lista1.ini, valor);
                }
                else {
                    aux = remover_elemento(&lista2, lista2.ini, valor);
                }

                cout << endl;
                if (aux) {
                    cout << "Elemento removido com sucesso." << endl;
                }
                else {
                    cout << "Elemento não encontrado na lista" << endl;
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
            case 4:
                cout << "\n----- Lista 1 -----" << endl;
                cout << "Comprimento: " << lista1.comprimento << endl;
                cout << "Total dos valores: " << lista1.total << endl;

                cout << "\n----- Lista 2 -----" << endl;
                cout << "Comprimento: " << lista2.comprimento << endl;
                cout << "Total dos valores: " << lista2.total << endl;

                break;
            case 5:
                lista_escolhida = escolher_lista();

                cout << "Digite o valor que deseja contar a quantidade de ocorrências na lista: ";
                cin >> valor;

                if (lista_escolhida == 1) {
                    cout << "\nNúmero de ocorrências: " << contar_mesma_ocorrencia(lista1.ini, valor) << endl;
                }
                else {
                    cout << "\nNúmero de ocorrências: " << contar_mesma_ocorrencia(lista2.ini, valor) << endl;
                }

                break;
            case 6:
                lista_escolhida = escolher_lista();

                cout << "Digite o valor que deseja substituir: ";
                cin >> valor;

                cout << "Digite o valor pelo qual deseja substitui-lo: ";
                cin >> subs;

                if (lista_escolhida == 1) {
                    substituir_ocorrencias(lista1.ini, valor, subs);
                }
                else {
                    substituir_ocorrencias(lista2.ini, valor, subs);
                }

                cout << "Valores substituidos com sucesso." << endl;

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
