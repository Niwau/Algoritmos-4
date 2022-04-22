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
        printf("Qual é o seu gênero ? (M/F): ");
        scanf("%c", &genero);
        fflush(stdin);

        printf("Você gostou do produto ? (G/N): ");
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
    printf("%d pessoas não gostaram do produto.\n", total_nao_gostaram);

    if(homens_gostaram/numero_entrevistas > mulheres_gostaram/numero_entrevistas){
        printf("A maior aceitação foi no público masculino.");

    } else if(homens_gostaram/numero_entrevistas == mulheres_gostaram/numero_entrevistas) {
        printf("Aceitação igual nos dois públicos");

    } else{
        printf("A maior aceitação foi no público feminino.");

    }


}
