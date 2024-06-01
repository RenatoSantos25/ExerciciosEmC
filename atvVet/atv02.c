#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main(){
    int vet[N];
    int menorValor, maiorValor= 0;
    int j =0;
    int i = 0;
    srand(time(NULL));

    for( i=0; i<N; i++)
    {
       vet[i]= rand()%61;
        printf("%d\n", vet[i]);
    }

    for ( j = 0; j < N; j++)
    {

        if (vet[j] > maiorValor)
        {
            maiorValor = vet[j];
        }
        if (vet[j] < menorValor)
        {
            menorValor = vet[j];
        }
    }
    printf("O maior valor deste vetor e: %d\n", maiorValor);
    printf("O menor valor deste vetor e: %d\n", menorValor);
}