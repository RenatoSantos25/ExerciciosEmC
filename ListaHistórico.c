#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct TipoNodo{
    int info;
    struct TipoNodo *elo;
};

typedef struct TipoNodo TipoNodo;

//Protótipos
int menu(void);
void voltar(TipoNodo **ponteiroLista);
void insereIni(TipoNodo **ponteiroLista, char dados[43]);
void mostra(TipoNodo *ponteiroLista);

int main()
{
    TipoNodo *ponteiroLista;
    int op,sucesso;
    char dados[43];
    ponteiroLista = NULL; //Criação de Uma Lista Linear Encadeada
    do
    {
        op=menu();
        switch(op)
        {
            case 1:
                printf("Digite uma url: ");
                scanf("%s",dados);
                sucesso = insereIni(&ponteiroLista, dados);
                if(sucesso == 0)
                    printf("\nDeu certo!!!\n");
                else
                    printf("\nErro!!!\n");
                break;
            case 2:
                mostra(ponteiroLista);
                break;
            case 3:
                voltar(&ponteiroLista);
                break;
            default:
                if(op!=0)
                {
                    printf("\nOpcao invalida!!!\n");
                }
        }
    }while(op!=0);
}
int menu(void)
{
    int op;
    printf("\n\t\t\t*--------- MENU ---------*");
    printf("\n\t\t\t|  [1] Inserir Inicio    |");
    printf("\n\t\t\t|  [2] Mostrar           |");
    printf("\n\t\t\t|  [3] Voltar            |");
    printf("\n\t\t\t|  [0] Sair              |");
    printf("\n\t\t\t*------------------------*\n");
    printf("\nDigite uma opcao: ");
    scanf("%d",&op);
    return op;
}

//Inserção no início da lista encadeada
void insereIni(TipoNodo **ponteiroLista, char dados[43])
{
    TipoNodo* ponteiroNovo = (TipoNodo*) malloc(sizeof(TipoNodo));
    if  (ponteiroNovo == NULL)
        return 1;
    else
    {
        strcpy(ponteiroNovo->info, dados);
        ponteiroNovo->elo=*ponteiroLista; 
        *ponteiroLista = ponteiroNovo;
        return 0;
    }
}

//Mostra LLE
void mostra(TipoNodo *ponteiroLista)
{
    TipoNodo *p;
    for( p = ponteiroLista; p != NULL; p = p->elo)
        printf("%d\t",p->info);
}
void voltar(TipoNodo **ponteiroLista)
{
    TipoNodo *p;
    p = *ponteiroLista;
    *ponteiroLista = p->elo;
    printf("\nVoltou a pagina anterior\n");

}

