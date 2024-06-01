// 5. Desenvolva um programa em C que receba um vetor de inteiros e substitua todos os valores negativos por zero.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
int main()
{
    int vet1[N];
 

    srand(time(NULL));
    printf("Vetor 1\n");
    printf("Digite os valores do vetor, negativos ou positivos\n");
 for (int i = 0; i < N; i++) {
        scanf("%d", &vet1[i]);
    }
    printf("O seu vetor, com os numeros negativos substituidos por 0\n");
    for (int i = 0; i < N; i++)
    {
        if (vet1[i] < 0)
        {
           vet1[i] = 0;
        }
                printf("%d\n", vet1[i]);
    }
       
   
}