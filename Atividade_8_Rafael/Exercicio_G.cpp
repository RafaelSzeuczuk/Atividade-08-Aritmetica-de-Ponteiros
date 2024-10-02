#include <iostream>
using namespace std;

void armazena(int vet[], int *pt1, int *pt2)
{
    pt1 = vet;
    pt2 = &vet[sizeof(vet) / sizeof(vet[1])];
}

void juncao(int vet1[], int vet2[])
{
    int *ptr, vet[(sizeof(vet1) / sizeof(vet1[1])) + (sizeof(vet2) / sizeof(vet2[1]))];
    for (int i = 0; i <= sizeof(sizeof(vet1) / sizeof(vet1[1])); i++)
    {
        vet[i] = vet1[i];
    }
    for (int i = sizeof(sizeof(vet1) / sizeof(vet1[1])), k = 0; i <= sizeof(sizeof(vet2) / sizeof(vet2[1])); i++, k++)
    {
        vet[i] = vet1[k];
    }
    ptr = vet;
}

void separa(int vet[])
{
    int npares = 0, nimpares = 0;
    for (int i = 0; i < (sizeof(vet) / sizeof(vet[0])); i++)
    {
        if (vet[i] % 2 == 0)
            npares++;
        if (vet[i] % 2 == 1)
            nimpares++;
    }
    int vet_pares[npares], vet_impares[nimpares],k=0,j=0;
    for (int i = 0; i < (sizeof(vet) / sizeof(vet[0])); i++)
    {

        if (vet[i] % 2 == 0){
            vet_pares[k] = vet[i];
            k++;}
        if (vet[i] % 2 == 1){
            vet_impares[j] = vet[i];
            j++;}
    }

    for (int i = 0; i <npares; i++)
    {
        cout << vet_pares[i] << " ";
    }

    for (int i = 0; i <nimpares; i++)
    {
        cout << vet_impares[i] << " ";
    }
}

int main(){
    int vet[8]={1,3,4,2,7,6,5,9};
    separa(vet);
}