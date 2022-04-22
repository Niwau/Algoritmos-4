#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int n, y, resultado;
    setlocale(LC_ALL, "Portuguese");

    printf("Escolha um número inteiro. [N] ");
    scanf("%d", &n);

    printf("Escolha um número inteiro. [Y] ");
    scanf("%d", &y);

    for(int i = 1; i * y < n ;i++){
        printf("%d\n", i * y);
    }

}
