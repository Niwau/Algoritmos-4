#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int somaTotal = 0;
    setlocale(LC_ALL, "Portuguese");

    for(int i = 1; i <= 50; i++ ){
        printf("%d,", i);
        printf("%d,", 51 - i );
        somaTotal += i + (51 - i);
    }

    printf("\n\nA soma total é: %d\n", somaTotal);
}
