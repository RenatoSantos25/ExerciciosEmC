//2.Desenvolva um programa em C que receba dois vetores de inteiros de mesmo tamanho e calcule o produto escalar entre eles.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
int main(){
    int vet1[N];
    int vet2[N];
    int prodEsc= 0;
 
    srand(time(NULL));
    printf("Vetor 1\n");
    for (int i = 0; i < N; i++)
    {
       vet1[i]= rand()%61;
        printf("%d\n", vet1[i]);   
    }
    printf("Vetor 2\n");
    for (int i = 0; i < N; i++)
    {
       vet2[i]= rand()%61;
        printf("%d\n", vet2[i]);   
    }
    for (int i = 0; i < N; i++)
    {
        
        if (vet1[i] % 2 == 0 )
        { 
            prodEsc+= vet1[i] * vet2[i];
        }

        
    }
    printf("o produto escalar entre os vetores é %d", prodEsc);   
    
}