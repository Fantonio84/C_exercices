#include <stdio.h>

int main()
{

    int i, j;
    float media_geral, media1, media2, media3, media4, media5, mat[5][4];
    media1 = 0;
    media2 = 0;
    media3 = 0;
    media4 = 0;
    media5 = 0;
    media_geral = 0;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Entre com a %d nota do %d aluno : ", j + 1, i + 1);
            scanf("%f", &mat[i][j]);
        }
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {

            media_geral = media_geral + mat[i][j];
            if (i == 0)
                media1 = media1 + mat[i][j];
            if (i == 1)
                media2 = media2 + mat[i][j];
            if (i == 2)
                media3 = media3 + mat[i][j];
            if (i == 3)
                media4 = media4 + mat[i][j];
            if (i == 4)
                media5 = media5 + mat[i][j];
        }
    }

    printf("A media do primeiro aluno deu %f \n", media1 / 4);
    printf("A media do segundo aluno deu %f \n", media2 / 4);
    printf("A media do terceiro aluno deu %f \n", media3 / 4);
    printf("A media do quarto aluno deu %f \n", media4 / 4);
    printf("A media do quinto aluno deu %f \n", media5 / 4);
    printf("A media da classe deu %f \n", media_geral / 20);

    return 0;
}