#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main(){
    int i;
    int vetA[N];
    int vetB[N];
    int vetC[10];
     srand(time(NULL));
    printf("Vetor A\n");
    for (i = 0; i < 10; i+= 2)
    {
       vetA[i]= rand()%61;
        printf("%d\n", vetA[i]);   
        vetC[i]= vetA[i];
    }
    printf("Vetor B\n");
    for (i = 1; i <10; i+=2)
    {
       vetB[i]= rand()%61;
        printf("%d\n", vetB[i]);
         vetC[i]= vetB[i];   
    }
    printf("Vetor C\n");
    for (i = 0; i < 10; i++)
    {
      
        printf("%d\n", vetC[i]);   
    }

}