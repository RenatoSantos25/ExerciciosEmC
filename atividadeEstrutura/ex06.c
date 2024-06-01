#include <stdlib.h>

int main()
{
    int num, codigo_produto, qtd_produto;
    float valor_produto, total;

    do
    {
        printf("digite o codigo do produto que deseja comprar:   ");
        scanf("%d", &codigo_produto);

        printf("digite quantos desse produto deseja: ");
        scanf("%d", &qtd_produto);

        if (codigo_produto == 1001)
        {
            total += (5.32 * qtd_produto);
        }
        else if (codigo_produto == 1324)
        {
            total += (6.45 * qtd_produto);
        }

        else if (codigo_produto == 6548)
        {
            total += (2.37* qtd_produto);
        }
        else if (codigo_produto == 987)
        {
            total += (5.32 * qtd_produto);
        }
        else if (codigo_produto == 7623)
        {
            total += (6.45 * qtd_produto);
        }
        else{
           printf( "O produto desejado nao existe");
        }

        printf("O total que o cliente deve ate agora e: %.2f \n",total);
        printf("Deseja continuar escolhendo produtos?\nDigite [1] Sim\n[2] Nao \n");
        scanf("%d", &num);
    } while (num != 2);
}