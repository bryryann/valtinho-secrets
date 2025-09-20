#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n = 1;
    float r = 1.0;
    char c = 'a';

    int *ptr_n;
    float *ptr_r;
    char *ptr_c;

    ptr_n = &n;
    ptr_r = &r;
    ptr_c = &c;

    cout << "n: " << *ptr_n << endl;
    cout << "r: " << *ptr_r << endl;
    cout << "c: " << *ptr_c << endl;

    *ptr_n = 2;
    *ptr_r = 3.5;
    *ptr_c = 'b';

    cout << "após alteração: " << endl;
    cout << "n: " << *ptr_n << endl;
    cout << "r: " << *ptr_r << endl;
    cout << "c: " << *ptr_c << endl;

    return 0;
}
