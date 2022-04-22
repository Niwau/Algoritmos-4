#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float numero_entrevistas = 5;
    int total_gostaram = 0;
    int total_nao_gostaram = 0;
    char genero;
    char avaliacao;
    float homens_gostaram, mulheres_gostaram;

    for(int i = 1; i <= numero_entrevistas; i++){
        printf("Qual � o seu g�nero ? (M/F): ");
        scanf("%c", &genero);
        fflush(stdin);

        printf("Voc� gostou do produto ? (G/N): ");
        scanf("%c", &avaliacao);
        fflush(stdin);

        switch(avaliacao){
            case 'G':  total_gostaram++;
            break;

            case 'N': total_nao_gostaram++;
            break;
        }

        if(genero == 'M' && avaliacao == 'G'){
            homens_gostaram++;

        } else if(genero == 'F' && avaliacao == 'G'){
            mulheres_gostaram++;
        }

    }

    printf("%d pessoas gostaram do produto.\n", total_gostaram);
    printf("%d pessoas n�o gostaram do produto.\n", total_nao_gostaram);

    if(homens_gostaram/numero_entrevistas > mulheres_gostaram/numero_entrevistas){
        printf("A maior aceita��o foi no p�blico masculino.");

    } else if(homens_gostaram/numero_entrevistas == mulheres_gostaram/numero_entrevistas) {
        printf("Aceita��o igual nos dois p�blicos");

    } else{
        printf("A maior aceita��o foi no p�blico feminino.");

    }


}
