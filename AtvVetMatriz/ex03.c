//3. Crie um programa em C que verifique se um vetor de inteiros está ordenado de forma crescente.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
int main(){
    int vet1[N];
    int aux= 0;
 
    srand(time(NULL));
    printf("Vetor 1\n");
    for (int i = 0; i < N; i++)
    {
      scanf("%d", &vet1[i]);
        
    }
    for (int i = 0; i < N -1; i++)
    {
       
        if(vet1[i]> vet1[i + 1]){
            aux++;
        }

    }
    if (aux == 0)
    {
        printf("O vetor esta em ordem crescente");   
    }
    else{
         printf("O vetor não esta ordenado de forma crescente");   
    }
    
   
    
}