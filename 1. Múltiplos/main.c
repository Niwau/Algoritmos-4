#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int n, y, resultado;
    setlocale(LC_ALL, "Portuguese");

    printf("Escolha um n�mero inteiro. [N] ");
    scanf("%d", &n);

    printf("Escolha um n�mero inteiro. [Y] ");
    scanf("%d", &y);

    for(int i = 1; i * y < n ;i++){
        printf("%d\n", i * y);
    }

}
