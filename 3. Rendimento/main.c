#include <stdio.h>

int main(){
    float valorInvestido;
    float rendimentoMensal;
    float fatorMultiplicativo;
    float valorFinal;
    int anos;
    int meses;

    printf("Insira o valor investido: ");
    scanf("%f", &valorInvestido);

    printf("Insira a porcentagem de rendimento mensal: ");
    scanf("%f", &rendimentoMensal);

    printf("Insira o número de anos: ");
    scanf("%d", &anos);

    meses = anos * 12;
    fatorMultiplicativo = (100 + rendimentoMensal)/100;
    valorFinal = valorInvestido;

    for(int i = 1;i <= meses; i++){
        valorFinal *= fatorMultiplicativo;
    }

    printf("Valor final: %.2f\n", valorFinal);

}
