#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numeroEscolhido, parteUnidade, parteDecimal;

    printf("Insira um número menor ou igual a 18: ");
    scanf("%d", &numeroEscolhido );

    if(numeroEscolhido <= 18){
        for(int numeroAtual = 1; numeroAtual <= 99; numeroAtual++){
            parteDecimal = numeroAtual/10;
            parteUnidade = numeroAtual%10;

            if(parteDecimal + parteUnidade == numeroEscolhido){
                printf("%d, ", numeroAtual);
            }
        }

    } else {
        printf("Número inválido, fechando o programa.");
    }
}
