#include <stdio.h>

int main() {

    int x, y, i, j;
    printf("Quantas linhas vai ter a matriz? ");
    scanf("%d", &x);
    printf("Quantas colunas vai ter a matriz? ");
    scanf("%d", &y);

    int matrix[x][y];

    for(i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMATRIZ DIGITADOS: \n");

    for(i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
