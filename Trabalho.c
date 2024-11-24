#include <stdio.h>

int main()
{
    // Array com  8 produtos com o codigo do produto, quantidade vendida, preco unitario, preco de venda total e clissificacao( 1 = A, 2 = B e 3 = C)
    float produtos[8][5] = {
        {1.0, 0, 118.70, 0, 0},
        {2.0, 0, 95.80, 0, 0},
        {3.0, 0, 83.50, 0, 0},
        {4.0, 0, 60, 0, 0},
        {5.0, 0, 23, 0, 0},
        {6.0, 0, 15, 0, 0},
        {7.0, 0, 3.80, 0, 0},
        {8.0, 0, 1.70, 0, 0}};

    int i, j, x, codProduto, quantidadeVendida;
    float vendaTotal;
    char classificao;
    vendaTotal = 0;
    x = 1;

    // Loop onde pede o codigo do produto e a quantidade vendida
    do
    {
        printf("Informe o codigo do %d produto  : ", x);
        scanf("%d", &codProduto);

        if (codProduto != 0)
        {
            if (codProduto > 8)
            {
                printf("--------------------------------------------\n");
                printf("Codigo do Produto não deve ser maior que 8. \n");
                printf("--------------------------------------------\n");
            }
            else
            {
                printf("Informe a quantidade vendida do %d produto  : ", x);
                scanf("%d", &quantidadeVendida);
            }
        }
        if (quantidadeVendida <= 0)
        {
            printf("--------------------------------------------\n");
            printf("Quantidade tem que ser maior que 0. \n");
            printf("--------------------------------------------\n");
        }
        else
        {
            produtos[codProduto - 1][1] += quantidadeVendida;
            x++;
        }

    } while (codProduto != 0);

    // loop para calcular os valores totais de cada item e tambem o valor total geral e a classificacao de cada item
    for (i = 0; i < 7; i++)
    {
        produtos[i][3] = produtos[i][1] * produtos[i][2];
        vendaTotal += produtos[i][3];

        if (produtos[i][3] > 10001 )
        {
            produtos[i][4] = 3;
        }
        else
        {
            if (produtos[i][3] > 5001)
            {
                produtos[i][4] = 2;
            }
            else
            {
                produtos[i][4] = 1;
            }
        }
    }

    // Determino a classificao dos produtos e imprimo os valores na tela
    for (i = 0; i < 7; i++)
    {
        if (produtos[i][4] == 1)
           classificao = 'A';
        
        
        
            if (produtos[i][4] == 2)            
                classificao = 'B';
            
            if (produtos[i][4] == 3)
                classificao = 'C';
            
        
        //Mostra os dados do array na tela
        printf("Produto %.1f com preco unitario de %.2f reais , teve %.1f vendas com um valor total de vendas de %.2f e classificao %c . \n ", produtos[i][0] ,produtos[i][2],produtos[i][1],produtos[i][3], classificao);
    }

    // Usei para ver os valores do array e debugar.
    /* for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%.2f ", produtos[i][j]);
        }
        printf("\n");
    } */

    //Imprime o valor total de vendas
    printf("O valor total de vendas total deu %.2f reais", vendaTotal);

    return 0;
}
