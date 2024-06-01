#include <stdlib.h>

int main(){
    int dias = 0;
    int meses = 0;
    int anos = 0;
    printf("Digite sua idade em anos, meses e dias respectivamente\n");
    scanf("%d", &anos);
    scanf("%d", &meses);
    scanf("%d", &dias);
    int idade_em_dias = anos * 365 + meses * 30 + dias;

    printf("Sua idade digitada em dias e: %d", idade_em_dias);


}