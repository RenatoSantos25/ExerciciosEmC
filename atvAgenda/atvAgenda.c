#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define N 10

struct Pessoa
{
    int codigoPessoa;
    char nome[25];
    int telefone;
};

void listar(struct Pessoa *pessoas, int *numPessoa)
{
    printf("--------- L I S T A ---------\n");
    for (int i = 0; i < *numPessoa; i++)
    {
        printf("Codigo: %d\n", pessoas[i].codigoPessoa);
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Telefone: %d\n", pessoas[i].telefone);
        printf("-----------------------------\n");
    }
    printf("-----------------------------\n");

}

void cadastrar(struct Pessoa *pessoas, int *numPessoa, int codigo)
{
    if (*numPessoa >= N)
    {
        printf("Nao e possivel inserir mais nenhum usuario.\n");
        return;
    }

    pessoas[*numPessoa].codigoPessoa = codigo;
    printf("Nome : ");
    scanf("%s", &pessoas[*numPessoa].nome);
    printf("Telefone: ");
    scanf("%d", &pessoas[*numPessoa].telefone);
    (*numPessoa)++;
    printf("Pessoa cadastrada com sucesso.\n");
    printf("-----------------------------\n");
}

void excluir(struct Pessoa *pessoas, int *numPessoa)
{
    int codigoExcluir;
    printf("Digite o numero do codigo que deseja excluir: ");
    scanf("%d", &codigoExcluir);

    for (int i = 0; i < *numPessoa; i++)
    {
        if (codigoExcluir == pessoas[i].codigoPessoa)
        {
            for (int j = i; j < *numPessoa - 1; j++)
            {
                pessoas[j] = pessoas[j + 1];
            }
            (*numPessoa)--;
            printf("Pessoa excluida com sucesso.\n");
            printf("-----------------------------\n");
            return;
        }
    }
    printf("Codigo nao encontrado.\n");
}

void editar(struct Pessoa *pessoas, int *numPessoa)
{
    int codigoEditar;
    printf("Digite o numero do codigo que deseja editar: ");
    scanf("%d", &codigoEditar);

    for (int i = 0; i < *numPessoa; i++)
    {
        if (codigoEditar == pessoas[i].codigoPessoa)
        {
            printf("Novo nome : ");
            scanf("%s", pessoas[i].nome);
            printf("Novo telefone: ");
            scanf("%d", &pessoas[i].telefone);
            printf("Pessoa editada com sucesso.\n");
            printf("-----------------------------\n");
            return;
        }
    }

    printf("Codigo nao encontrado.\n");
    printf("-----------------------------\n");
}

void ordenar(struct Pessoa *pessoas, int *numPessoa) {
    int ordena = 1;
    while (ordena) {
        ordena = 0;
        for (int i = 0; i < *numPessoa - 1; i++) {
            if (strcmp(pessoas[i].nome, pessoas[i + 1].nome) > 0) {
                struct Pessoa temp = pessoas[i];
                pessoas[i] = pessoas[i + 1];
                pessoas[i + 1] = temp;
                ordena = 1;
            }
        }
    }
    printf("Pessoas ordenadas com sucesso.\n");
    printf("-----------------------------\n");
}

int main()
{
    struct Pessoa pessoas[N];
    int numPessoa = 0;
    int opcao;
    int codigo = 1;

    do
    {
        printf("---------------- AGENDA ----------------\n");
        printf("Selecione uma opcao da agenda \n [1]Listar \n [2]Cadastrar \n [3]Excluir \n [4]Editar \n [5]Ordenar \n [0]Sair\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            listar(pessoas, &numPessoa);
            break;
        case 2:
            cadastrar(pessoas, &numPessoa, codigo);
            codigo++;
            break;

        case 5:
            ordenar(pessoas, &numPessoa);
            break;

        case 3:
            excluir(pessoas, &numPessoa);
            break;
        case 4:
            editar(pessoas, &numPessoa);
            break;

        case 0:
            printf("Obrigado por usar a agenda!\n");
            return 0;
        default:
            printf("A opcao digitada nao exite, favor colocar outra.\n");
            break;
        }
    } while (opcao != 0);
}
