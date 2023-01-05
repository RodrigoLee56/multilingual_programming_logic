#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}


void ler_texto(char *buffer, int length)
{
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}
int main()
{

    double salario;
    char nome[50];
    int idade;
    char sexo;

    printf("Informe o nome: ");
    ler_texto(nome, 50);

    printf("Informe o salario: ");
    scanf("%lf", &salario);


    printf("Digite uma idade: ");
    scanf("%d", &idade);

    printf("Digite um sexo (F/M): ");
    limpar_entrada();
    scanf("%c", &sexo);

    printf("Nome: %s\n", nome);
    printf("Salario: %.2lf\n", salario);
    printf("Idade: %d\n", idade);
    printf("Sexo: %c\n", sexo);
    return 0;
}
