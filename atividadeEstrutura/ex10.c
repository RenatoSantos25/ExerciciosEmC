#include <stdlib.h>

int main(){
    float dias, meses , anos = 0;
    printf("Digite sua idade em dias\n");
    scanf("%f", &dias);

anos = dias / 365;
meses = dias / 30;
printf("Sua idade em anos e: %.2f\n ", anos);
printf("Sua idade em meses e: %.2f\n", meses);
    
}