#include <stdio.h>

int main()
{

    int i, j, mat[3][4], par, impar ;
    float media;
    par = 0;
    impar = 0;
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
           if (mat[i][j] % 2 == 0) 
           {
                par = par+1;
           } else 
           {
                impar = impar + mat[i][j];
           }

           media = media + mat[i][j];

        }
       
    }
    media = media / 12 ;
    
    printf("A matriz tem %d numeros pares \n" , par);
    printf("a soma dos elementos impares deu %d \n" , impar);
    printf("A media de todos os elementos deu %f \n" , media);


    


    return 0;
}