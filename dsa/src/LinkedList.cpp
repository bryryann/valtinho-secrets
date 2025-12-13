#include <iostream>
#include "LinkedList.h"

Node::Node(int value) {
    data = value;
    next = nullptr;
};

LinkedList::LinkedList() {
    head = nullptr;
}

void LinkedList::insertFront(int value) {
    Node *new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}

void LinkedList::insertBack(int value) {
    Node *new_node = new Node(value);

    if (!head) {
        head = new_node;
        return;
    }

    Node *temp = head;
    while (temp->next) {
        temp = temp->next;
    }

    temp->next = new_node;
}

void LinkedList::display() const {
    Node *temp = head;
    while (temp) {
        std::cout << temp->data << " -> ";
        temp = temp->next;
    }
    std::cout << "NULL\n";
}

LinkedList::~LinkedList() {
    Node *current = head;
    while (current) {
        Node *next = current->next;
        delete current;
        current = next;
    }
}
