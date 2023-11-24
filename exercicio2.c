#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <time.h>
#include <string.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    char alunos[5][200];
    int idades[5];
    float notas[5][3];
    int i, j;
    float media[3];
    float somanotas = 0;
    
    
    for (i = 0; i < 5; i++)
    {
        printf("digite seu nome: ");
        gets(alunos[i]);
        fflush(stdin);

        printf("digite sua idade: ");
        scanf("%d", &idades[i]);

        

        for (j = 0; j < 3; j++)
        {
            printf("digite as notas: ");
            scanf("%f", &notas[i][j]);
             somanotas += notas[i][j];
        }
        
        fflush(stdin);
           
        media[i] = (float) somanotas / (float) j;
        somanotas = 0;
    }

    system("cls || clear");

    printf("\nExibindo dados...\n");


    for (i = 0; i < 5; i++)
    {
        printf("nomes: %s \n", alunos[i]);
        printf("idades: %d \n", idades[i]);

        for (j = 0; j < 3; j++)
        {
            printf("notas: %.2f \n", notas[i][j]);
        }
          printf("media: %.2f \n", media[i]);
         
            if (media[i] >= 7)
            {
                printf("aprovado\n");
            }
            else if (media[i] >= 5)
            {
                printf("recuperação\n");
            }
            else
            {
                printf("Reprovado\n");
            }
printf("\n");
             
            
       

    }


    return 0;
}
