#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main(void){
   int  vetorTotal = 0;
    int vet[N];
    int media = 0;
    int cont = 0;
    int j =0;
    int i = 0;
    
    srand(time(NULL));

    for( i =0; i<N; i++)
    {
       vet[i]= rand()%61;
        printf("%d\n", vet[i]);
    }
    
    for(j=0; j< N; j++)
    {
       vetorTotal +=vet[j];
       cont++;
    }
     media = vetorTotal / cont;
    printf("A media dos valores do vetor e: %d", media);
   
}