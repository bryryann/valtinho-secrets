#include <iostream>
#include <stdlib.h>
using namespace std;

string binario(int n) {
    string res;

    if (n/2 > 0) {
        res = binario(n/2) + to_string(n%2);
    }
    else {
        res = to_string(n%2);
    }

    return res;
}

int num;
string bin;
int main() {
    setlocale(LC_ALL, "Portuguese");

    cout << "Insira um número inteiro: ";
    cin >> num;

    bin = binario(num);
    cout << "-------------" << endl;
    cout << "\nNúmero: " << num << endl;
    cout << "Binário: " << bin << endl;

    return 0;
}
