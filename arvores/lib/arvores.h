#ifndef ARVORES_H
#define ARVORES_H

#include <iostream>
#include <stdlib.h>

struct Node {
    int valor;

    Node *esq;
    Node *dir;
};

struct Arvore {
    int total;

    Node *raiz;
};

void inicializar_lista(Arvore *arv);

Node* novo_node(int valor);

Node* inserir_filho(Arvore *arv, Node *pai, int valor, char lado);

Node* inserir_ordenado(Arvore *arv, Node *ptr, int valor);

Node* acha_menor(Node *ptr);

Node* remover(Arvore *arv, Node *ptr, int valor);

void imprime_arvore(Node *ptr, std::string tipo);

#endif
