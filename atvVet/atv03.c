#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main(){
  
    int vet[N];
    int j =0;
    int i = 0;
    srand(time(NULL));

    for( i=0; i<N; i++)
    {
       vet[i]= rand()%61;
        printf("%d\n", vet[i]);
    }

    for ( i = 0; i < N; i++)
    {
       printf("Tabuada do vetor na posicao %d \n", i);
      for ( j = 0; j < 11; j++)
      {
        printf("%d * %d = %d \n", vet[i], j, vet[i] * j);
      }
      
    }
    
}