#include <stdio.h>

int main()
{

    int i, j, mat[3][4] ;
    float media;
    media = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Entre com o dado da posicao %d , %d : ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
          media = media + mat[i][j];

        }
       
    }
    media = media / 12 ;
    
   printf("A media de todos os elementos deu %f \n" , media);


    


    return 0;
}