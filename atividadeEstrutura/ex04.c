#include <stdlib.h>

int main(){
    float codigo = 0;
    float qtd = 0;

    printf("Insira o codigo do produto\n");
    scanf("%f", &codigo);
    printf("Insira a quantidade desse produto que foi comprada\n");
    scanf("%f", &qtd);

    if (codigo ==100){
        printf("O valor a ser pago pelo cachorro quente é: %.2f", qtd * 1.2);
    }
   else if (codigo ==101){
printf("O valor a ser pago pelo bauru simples é: %.2f", qtd * 1.3);
    }
    else if (codigo ==102){
printf("O valor a ser pago pelo bauro com ovo é: %.2f", qtd * 1.5);
    }
    else if (codigo ==103){
printf("O valor a ser pago pelo hamburguer é: %.2f", qtd * 1.2);
    }
    else if (codigo ==104){
printf("O valor a ser pago pelo Cheeseburguer é: %.2f", qtd * 1.3);
    }
    else if (codigo ==105){
printf("O valor a ser pago pleo Refrigerante é: %.2f", qtd);
    }
    else{
        printf("O codigo do produto nao existe");
    }
   
}