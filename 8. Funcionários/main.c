#include <stdio.h>

int main(){
    int numero_funcionarios = 2;
    int matricula;
    char genero;
    int idade;
    float salario;
    float anos;
    int menos_21 = 0;
    int quantidade_mulheres = 0;
    float quantidade_homens = 0;
    float soma_salario_homens = 0;

    for(int i = 1; i <= numero_funcionarios; i++){
        printf("Digite: matricula (123), genero (M/F), idade, salario, anos na empresa.\n");
        scanf("%d %c %d %f %f", &matricula, &genero, &idade, &salario, &anos);

        if(idade - anos < 21){
            menos_21++;
        }

        if(genero == 'F'){
            quantidade_mulheres++;

        } else {
            quantidade_homens++;
            soma_salario_homens += salario;
        }

    }

    printf("Quantidade de funcionarios que ingressaram na empresa com menos de 21 anos: %d\n", menos_21 );
    printf("Quantidade de funcionarias: %d\n", quantidade_mulheres );
    printf("Media salarial dos homens: %.2f\n", soma_salario_homens/quantidade_homens );
}
