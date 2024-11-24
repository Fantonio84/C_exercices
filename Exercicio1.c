#include <stdio.h>

int main()
{

    int i, j, mat[2][2],mat2 [2][2];

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Entre com o dado da posicao %d , %d : ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
           mat2 [i][j] = (mat[i][j] *2);
        }
       
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }

    return 0;
}