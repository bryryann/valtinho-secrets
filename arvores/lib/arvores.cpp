#include "arvores.h"

void inicializar_lista(Arvore *arv) {
    arv->total = 0;
    arv->raiz = nullptr;
}

Node* novo_node(int valor) {
    Node *novo = (Node*) malloc(sizeof(Node));
    if (novo != nullptr) {
        novo->valor = valor;
        novo->esq = nullptr;
        novo->dir = nullptr;
    }

    return novo;
}

Node* inserir_filho(Arvore *arv, Node *pai, int valor, char lado) {
    Node *ptr = novo_node(valor);

    if (pai == nullptr) {
        arv->raiz = ptr;
    }
    else {
        if (tolower(lado) == 'e') {
            pai->esq = ptr;
        }
        else {
            pai->dir = ptr;
        }
    }

    return ptr;
}

Node* inserir_ordenado(Arvore *arv, Node *ptr, int valor) {
    Node *ret;

    if (ptr != nullptr) {
        ret = ptr;

        if (valor < ptr->valor) {
            ptr->esq = inserir_ordenado(arv, ptr->esq, valor);
        }
        else if (valor > ptr->valor) {
            ptr->dir = inserir_ordenado(arv, ptr->dir, valor);
        }
        else {
            std::cout << "ITEM JÁ EXISTENTE" << std::endl;
        }
    }
    else {
        ret = novo_node(valor);
        arv->total++;

        if (arv->raiz == nullptr) {
            arv->raiz = ret;
        }
    }

    return ret;
}

Node* acha_menor(Node *ptr) {
    Node *ret;

    if (ptr->esq != nullptr) {
        ret = acha_menor(ptr->esq);
    }
    else {
        ret = ptr;
    }

    return ret;
}

Node* remover(Arvore *arv, Node *ptr, int valor) {
    Node *ret, *suc;

    if (ptr != nullptr) {
        ret = ptr;

        if (valor < ptr->valor) {
            ptr->esq = remover(arv, ptr->esq, valor);
        }
        else if (valor > ptr->valor) {
            ptr->dir = remover(arv, ptr->dir, valor);
        }
        else {
            if (ptr->esq == nullptr && ptr->dir == nullptr) {
                arv->total--;
                ret = nullptr;

                free(ptr);
            }
            else {
                if (ptr->esq == nullptr) {
                    ret = ptr->dir;
                    arv->total--;

                    free(ptr);
                }
                else if (ptr->dir == nullptr) {
                    ret = ptr->esq;
                    arv->total--;

                    free(ptr);
                }
                else {
                    suc = acha_menor(ptr->dir);

                    ptr->valor = suc->valor;
                    ptr->dir = remover(arv, ptr->dir, suc->valor);
                }
            }
        }
    }
    else {
        std::cout << "ELEMENTO AUSENTE" << std::endl;
    }

    return ret;
}

void imprime_arvore(Node *ptr, std::string tipo) {
    if (ptr != nullptr) {
        if (tipo == "PRE") {
            std::cout << ptr->valor << " -> ";
        }

        imprime_arvore(ptr->esq, tipo);

        if (tipo == "CEN") {
            std::cout << ptr->valor << " -> ";
        }

        imprime_arvore(ptr->dir, tipo);

        if (tipo == "POS") {
            std::cout << ptr->valor << " -> ";
        }
    }
}

