#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main(){
  
    int vet1[N];
    int vet2[N];
    int vet3[N];
    int maiorValor = 0;
    int i = 0;
    srand(time(NULL));
printf("Vetor Numero 1\n");
    for( i=0; i<N; i++)
    {
       vet1[i]= rand()%61;
        printf("%d\n", vet1[i]);
    }
    printf("Vetor Numero 2\n");
    for( i=0; i<N; i++)
    {
       vet2[i]= rand()%61;
        printf("%d\n", vet2[i]);
    }
    printf("Vetor Numero 3\n");
    for ( i = 0; i < N; i++)
    {
      if (vet1[i] > vet2[i])
      {
       vet3[i] = vet1[i];
      }
      else{
        vet3[i] = vet2[i];
      }
      
        printf("%d\n", vet3[i]);
    }
    
}