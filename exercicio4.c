#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <time.h>
#include <string.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

int numeros[5];
int i;
int quantidadedepares = 0;
int quantidadedeimpares = 0;
int maiornumero = 0;
int menornumero = 999;
int somadospares = 0;
float mediapares = 0;
int numeronegativo = 0;

for ( i = 0; i < 5; i++)
{
    printf("digite os numeros: ");
    scanf("%d", &numeros[i]);

    if (numeros[i] %2 == 0)
    {
        quantidadedepares += 1;
        somadospares += numeros[i];
    }
    else {
        quantidadedeimpares += 1;
    }
     maiornumero = numeros[i]> maiornumero? numeros[i]: maiornumero;
    menornumero = numeros[i]< menornumero? numeros[i]: menornumero;

if (numeros[i]<0)
    {
        numeronegativo++;
    }
}

mediapares = somadospares/ quantidadedepares;
printf("\n");
printf("\n");
printf("Carregando resultados....");
sleep(1);

printf("\nQuantidade de números ímpares: %d", quantidadedeimpares);
printf("\nQuantidade de números negativos: %d",numeronegativo);
printf("\nMaior número: %d", maiornumero);
printf("\nMenor número: %d", menornumero);
printf("\nmedia dos número pares: %.1f",mediapares);



 return 0;
}
