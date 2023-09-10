#include "lib.h"

bool Ricerca(char elenconomi[10][20], char nome[],  int &posizione) {
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 20; ++j) {
            if(elenconomi[i][j]!=nome[j]){
                j=20;
            } else {
                if(j==19){
                    posizione=i;
                    return true;
                }
            }

        }
    }
    return false;
}
