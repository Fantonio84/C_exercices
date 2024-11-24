#include <stdio.h>

int main()
{

    int i, j;
    float mat[3][3] ,mat2 [3][3];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Entre com o dado da posicao %d , %d : ", i, j);
            scanf("%f", &mat[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
           mat2 [i][j] = (mat[i][j] / 5);
        }
       
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%f ", mat2[i][j]);
        }
        printf("\n");
    }

    return 0;
}