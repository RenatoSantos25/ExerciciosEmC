//1. Faça um programa em C que conte quantos elementos pares existem em um vetor de inteiros.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
int main(){
    int vet1[N];
    int numpar= 0;
 
    srand(time(NULL));
    printf("Vetor 1\n");
    for (int i = 0; i < N; i++)
    {
       vet1[i]= rand()%61;
        printf("%d\n", vet1[i]);   
    }
    printf("Os numeros pares são:\n");
    for (int i = 0; i < N; i++)
    {
        
        if (vet1[i] % 2 == 0 )
        { 
            numpar++;
            printf("%d\n", vet1[i]);
        }

        
    }
    printf("Existem %d numeros pares presentes no vetor", numpar);   
    
}