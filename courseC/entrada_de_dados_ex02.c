#include <stdio.h>
#include <string.h>

void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length){
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main()
{

    int idade;
    char nome[50];

    printf("Idade: ");
    scanf("%d", &idade);

    printf("Nome: ");
    limpar_entrada();//Caso o for ler o nome primeiro, remova essa função.
    ler_texto(nome, 50);



    printf("Nome: %s\nIdade: %d\n", nome, idade);

    return 0;
}
