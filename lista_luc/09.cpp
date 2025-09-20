#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    float mat[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "end. de mat[" << i << "][" << j << "]: " << &mat[i][j] << endl;
        }
    }

    return 0;
}
