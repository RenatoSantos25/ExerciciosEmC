#include <stdlib.h>

int main()
{
    char sexo;
    float altura = 0;
    printf("Insira seu sexo:(Masculino(M) ou Femenino(F)) \n");
    scanf("%c", &sexo);
    printf("Insira a sua altura: \n");
    scanf("%f", &altura);

        if (sexo == 'M')
    {
        printf("O seu peso ideal seria: %f", (altura * 72.7)-58);
    } 
         else {
            printf("O seu peso ideal seria: %f", (altura * 62.1)-44.7);
         }
}