// 7. Preencha um vetor de 10 posições, ordene os valores em crescente e mostre ordenado na tela.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
int main()
{
    int vet1[N];
    int  aux = 0;

    srand(time(NULL));
    printf("Vetor 1\n");
    for (int i = 0; i < N; i++)
    {
        vet1[i] = rand() % 61;
        printf("%d\n", vet1[i]);
    }
     for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (vet1[i] < vet1[j]) {
                     aux = vet1[i];
                    vet1[i] = vet1[j];
                    vet1[j] = aux;
            }
        }
    }
    printf("Vetor em ordem crescente \n");
    for (int i = 0; i < N; i++)
        {
             printf("%d\n", vet1[i]);

        }
}