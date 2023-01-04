#include <stdio.h>
#include <string.h>

int main()
{

    int idade;
    double salario, altura;

    printf("Idade: ");
    scanf("%d", &idade);

    printf("Altura: ");
    scanf("%lf", &altura);

    printf("Salario: ");
    scanf("%lf", &salario);

    printf("Altura: %.2lf\nSalario: %.2lf\nIdade %d\n", altura, salario, idade);

    return 0;
}
