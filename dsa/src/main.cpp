#include "LinkedList.h"

int main() {
    LinkedList list;

    list.insertFront(2);
    list.insertFront(1);
    list.insertBack(3);
    list.insertBack(4);

    list.display();

    return 0;
}

