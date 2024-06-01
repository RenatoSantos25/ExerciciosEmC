#include <stdlib.h>

int main(){
    short idade = 0;
    printf("Insira a idade de um nadador\n");
    scanf("%hd", &idade);
    if (idade < 5)
    {
printf("O seu nadador nao se enquadra em nenhuma categoria");
    }
    
   else if (idade >= 5 && idade <=7)
    {
        printf("O seu nadador esta classificado como infantil A");
    }
    else if (idade >=8 && idade <= 10)
    {
      printf("O seu nadador esta classificado como infantil B");
    }
    else if (idade >11 && idade <= 13)
    {
      printf("O seu nadador esta classificado como juvenil A");
    }
    else if (idade >14 && idade <= 17)
    {
      printf("O seu nadador esta classificado como juvenil B");
    }
    else 
    {
      printf("O seu nadador esta classificado como adulto");
    }
    
    
}
