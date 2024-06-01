#include <stdio.h>

short IdadeFunc();
float AlturaFunc();
float calcularMedia(float soma, int total);
float calcularPerc(short parc, short total);

int main()
{
    int idade;
    float altura;
    int maisVelho = 0;
    int somaIdade = 0;
    int somaAltura = 0;
    int pessoas = 0;
    int qntMaior180 = 0;

    idade = IdadeFunc();
, 
    while (idade != 0)
    {
        somaIdade += idade;

        if (idade > maisVelho)
        {
            maisVelho = idade;
        }

        altura = AlturaFunc();

        somaAltura += altura;

        if (altura > 1.8)
        {
            qntMaior180++;
        }

        pessoas++;

        printf("\n");

        idade = IdadeFunc();
    }

    float mediaIdade = calcularMedia(somaIdade, pessoas);
    float mediaAltura = calcularMedia(somaAltura, pessoas);
    float percMaior180 = calcularPerc(qntMaior180, pessoas);

    printf("\n\n");

    printf("Resultados:\n");
    printf("- Media de idade: %g \n", mediaIdade);
    printf("- Media de altura: %.2fm \n", mediaAltura);
    printf("- Maior idade: %hd \n", maisVelho);
    printf("- Porcentagem das pessoas com mais de 1,80m: %.2f%%\n", percMaior180);

    return 0;
}

short IdadeFunc()
{
    short idade;

    printf("Digite a idade, quando nao desejar mais inserir, digite 0 \n");
    scanf("%hd", &idade);

    return idade;
}

float AlturaFunc()
{
    float altura;

    printf("Digite a altura (em metros): \n");
    scanf("%f", &altura);

    return altura;
}

float calcularMedia(float soma, int total)
{
    return (float)soma / total;
}

float calcularPerc(short parc, short total)
{
    return (float)(parc * 100) / total;
}