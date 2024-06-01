// 8. Escreva um programa em C que calcule e imprima a soma de todos os elementos de uma matriz 3x3 de inteiros.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10



int main() {
    int matriz[3][3];
    int maior;

   
    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

   
    maior = matriz[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }

 
    printf("Matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

 
    printf("O maior elemento da matriz eh: %d\n", maior);


}
