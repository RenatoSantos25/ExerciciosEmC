// 4. Faça um programa em C que verifique se um vetor de inteiros contém um determinado valor digitado pelo usuário.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
int main()
{
    int vet1[N];
    int  aux = 0;
    int cont = 0;

    srand(time(NULL));
    printf("Vetor 1\n");
    for (int i = 0; i < N; i++)
    {
        vet1[i] = rand() % 61;
        printf("%d\n", vet1[i]);
    }
    printf("Digite um numero e veja se ele esta presente em um vetor\n");
    scanf("%d", &aux);
    for (int i = 0; i < N - 1; i++)
    {
        if (vet1[i] == aux)
        {
            cont++;
        }
    }
if (cont > 0)
{
    printf("O numero digitado esta presente no vetor %d vezes", cont);
}
else{
    printf("O numero digitado nao esta presente no vetor ");
}
       
   
}