// 8. Escreva um programa em C que calcule e imprima a soma de todos os elementos de uma matriz 3x3 de inteiros.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
int main() {
    int matriz[3][3];
    int soma = 0;

    
    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            soma += matriz[i][j];
        }
    }


    printf("Matriz 3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }


    printf("A soma de todos os elementos da matriz eh: %d\n", soma);

}