#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int somaPositivos = 0;
    float mediaPositivos = 0;
    float quantidadePositivos = 0;
    int quantidadeLoops = 5;
    int quantidadeNegativos = 0;
    int numeroDigitado = 0;

    for(int i = 1; i <= quantidadeLoops; i++ ){
        printf("Insira o %dº número: ", i);
        scanf("%d", &numeroDigitado);

        if(numeroDigitado < 0){
            quantidadeNegativos++;

        } else {
            somaPositivos += numeroDigitado;
            quantidadePositivos++;
        }

    }

    mediaPositivos = somaPositivos/quantidadePositivos;

        printf("%d valores negativos foram inseridos!\n", quantidadeNegativos );
        printf("\na média dos valores positivos é: %.2f", mediaPositivos);
}
