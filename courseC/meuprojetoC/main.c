#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, soma, n, i;

    soma = 0;

    printf("Quantos números serão digitados: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        printf("Digite um número: ");
        scanf("%d", &x);
        soma += x;
    }

    printf("SOMA = %d\n", soma);

    return 0;
}
