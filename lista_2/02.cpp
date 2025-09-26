#include <iostream>
#include <stdlib.h>
using namespace std;

int mult(int a, int b) {
    int ret;

    if (a == 1) {
        ret = b;
    }
    else {
        ret = b + mult(a-1, b);
    }

    return ret;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    cout << mult(6, 4) << endl; 


    return 0;
}
