#include <iostream>
using namespace std;

void armazena(int vet[], int **pt1, int **pt2) {
    *pt1 = vet;
    *pt2 = vet + (sizeof(vet) / sizeof(vet[0]) - 1);
}

void juncao(int vet1[], int size1, int vet2[], int size2, int resultado[]) {
    int *ptr = resultado;

    for (int i = 0; i < size1; i++) {
        *(ptr++) = vet1[i];
    }
    for (int i = 0; i < size2; i++) {
        *(ptr++) = vet2[i];
    }

    ptr = resultado; 

    for (int i = 0; i < size1 + size2; i++) {
        cout << *(ptr++) << " ";
    }
    cout << endl;
}

void separa(int* vet, int size, int vet_pares[], int vet_impares[], int &npares, int &nimpares) {
    npares = 0;
    nimpares = 0;

    for (int i = 0; i < size; i++) {
        if (vet[i] % 2 == 0)
            npares++;
        else
            nimpares++;
    }

    int *ptr_pares = vet_pares;
    int *ptr_impares = vet_impares;

    for (int i = 0; i < size; i++) {
        if (vet[i] % 2 == 0) {
            *(ptr_pares++) = vet[i];
        } else {
            *(ptr_impares++) = vet[i];
        }
    }

    ptr_pares = vet_pares;
    ptr_impares = vet_impares;

    for (int i = 0; i < npares; i++) {
        cout << *(ptr_pares++) << " ";
    }
    cout << endl;

    for (int i = 0; i < nimpares; i++) {
        cout << *(ptr_impares++) << " ";
    }
    cout << endl;
}

int main() {
    int vet[8] = {1, 3, 4, 2, 7, 6, 5, 9};
    int *pt1, *pt2;
    armazena(vet, &pt1, &pt2);

    int vet1[4] = {1, 3, 4, 2};
    int vet2[4] = {7, 6, 5, 9};
    int resultado[8];
    juncao(vet1, 4, vet2, 4, resultado);

    int vet_pares[4], vet_impares[4];
    int npares, nimpares;
    separa(vet, 8, vet_pares, vet_impares, npares, nimpares);

    return 0;
}
