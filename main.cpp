#include <iostream>
#include "lib.h"

using namespace std;

int main() {
    char elenconomi[10][20];
    char nome[20];
    int posizione=0;

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 20; ++j) {
            nome[j]=' ';
            elenconomi[i][j]=' ';
        }
    }

    for (int i = 0; i < 10; ++i) {
        cin >> elenconomi[i];
    }

    cin >> nome;

    if (Ricerca(elenconomi, nome, posizione)) {
        cout << posizione;
    } else {
        cout << "non presente";
    }

    return 0;
}
