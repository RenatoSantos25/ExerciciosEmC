// 6. Escreva um programa em C que determine se um vetor de inteiros é simétrico, ou seja, se ele é igual ao seu vetor invertido
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
int main()
{
    int vet1[N];
    int aux =1;

    printf("Vetor 1\n");
    printf("Digite os valores do vetor\n");
 for (int i = 0; i < N; i++) {
        scanf("%d", &vet1[i]);
    }
    for (int i = 0; i < N / 2; i++) {
        if (vet1[i] != vet1[N- i]) {
            aux = 0; 
            break;
        }
       
    }
    if (aux == 1)
    {
       printf("O vetor eh simetrico");
    }
    else{
        printf("O vetor nao eh simetrico");
    }
}