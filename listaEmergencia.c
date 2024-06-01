#include <stdio.h>
#define N 5

struct Paciente
{
    int codigo;
    char nomePaciente[25];
};

typedef struct Paciente Paciente;

int menu(int *opcao);
int inserirEmergencia(Paciente listaLinear[], int IA, int FA, int *IL, int *FL, Paciente infoNodo);
int inserirNormal(Paciente listaLinear[], int IA, int FA, int *IL, int *FL, Paciente infoNodo);
int atenderPaciente(Paciente listaLinear[], int IA, int FA, int *IL, int *FL, Paciente infoNodo);
int mostrarLista(Paciente listaLinear[], int IA, int FA, int IL, int FL);

int main()
{
    Paciente listaLinear[N], infoNodo;
    int IA = 0, FA = N - 1, IL = -1, FL = -1, opcao;
    do
    {
        menu(&opcao);
        switch (opcao)
        {
        case 1:
            printf("Paciente normal!\n");
            printf("Insira o codigo do paciente"); scanf("%d",&infoNodo.codigo);
            printf("Nome do Paciente: ");
             scanf("%s",infoNodo.nomePaciente);
            inserirEmergencia(listaLinear, IA, FA, &IL, &FL, infoNodo);
            break;
        case 2:
            printf("Paciente em estado de emergencia!\n");
            printf("Insira o codigo do paciente"); scanf("%d",&infoNodo.codigo);
            printf("Nome do Paciente:"); 
            scanf("%s",infoNodo.nomePaciente);
            inserirNormal(listaLinear, IA, FA, &IL, &FL, infoNodo);
            break;
        case 3:
            printf("Mostrando...\n");
            mostrarLista(listaLinear, IA, FA, IL, FL);
            break;
        case 0:
            printf("Tchau! Já vai tarde...\n");
            break;
        default:
            printf("Opção inválida! Animal!\n");
            break;
        }
    } while (opcao != 0);
}

int menu(int *opcao)
{
    printf(":::::::: M E N U ::::::::\n");
    printf("[1] Paciente normal\n");
    printf("[2] Paciente em estado emergencial\n");
    printf("[3] Mostrar\n");
    printf("[0] Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", opcao);
    return 0;
}

int inserirEmergencia(Paciente listaLinear[], int IA, int FA, int *IL, int *FL, Paciente infoNodo){
    if (IA == *IL && FA == *FL) 
        return 1;
    else 
    {
        if (*IL == -1)
            *IL = *FL = IA;
        else if (*IL > IA)
            *IL = *IL-1;                  
        else 
        {       
            int i = 0;
            for (i=*FL; i>=*IL; i--)
                listaLinear[i+1] = listaLinear[i];
            *FL = *FL+1;
        }
        listaLinear[*IL] = infoNodo;
        return 0;
    }
}
int atenderPaciente(Paciente listaLinear[], int IA, int FA, int *IL, int *FL, Paciente infoNodo){
    if (IA == *IL) {
        listaLinear[*IL] = *IL + 1;
         int i = 0;
            for (i=*FL; i>=*IL; i--)
                listaLinear[i-1] = listaLinear[i];
            *FL = *FL-1;
    }
    
       
        return 0;
    
}
int inserirNormal(Paciente listaLinear[], int IA, int FA, int *IL, int *FL, Paciente infoNodo){
    if (IA == *IL && FA == *FL) 
        return 1;
    else 
    {
        if (*FL == -1)
            *FL = *IL = IA;
        else if (*FL >= IA)
            *FL = *FL+1;                  
       
        listaLinear[*FL] = infoNodo;
        return 0;
    }
}

int mostrarLista(Paciente listaLinear[], int IA, int FA, int IL, int FL){
    int i =0;
    for(i=IA; i<=FA; i++){
        if(i>=IL && i<=FL)
            printf("%3d - %5.1f - %s\n", listaLinear[i].codigo, listaLinear[i].nomePaciente);
        else
            printf("-------\n");
    }
    return 0;
}