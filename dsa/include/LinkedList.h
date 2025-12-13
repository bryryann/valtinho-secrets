#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

class LinkedList {
private:
    Node *head;

public:
    LinkedList();
    ~LinkedList();

    void insertFront(int value);
    void insertBack(int value);
    void display() const;
};

#endif
