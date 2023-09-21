#include <stdio.h>

//trocar float por double

int main(){

    char pls;
    float salario, soma;

    printf("digite o salario:\n");
    scanf("%f", &salario);

    printf("digite o nivel de experiencia do funcionario a, b ou c:\n");
    scanf(" %c", &pls);

    switch (pls)
    {
    case 'a':
        soma = salario + salario*0.05;

        printf("o novo salario e de:R$%.2f\n", soma);    
        break;

    case 'b':
        soma = salario + salario*0.08;
        printf("o novo salario e de:R$%.2f\n", soma);
        break;
    
    case 'c':
        soma = salario + salario*0.07;
        printf("o novo salario e de:R$%.2f\n", soma);
        break;
        
    default:
        printf("nivel de experiencia nao reconhecido");
        break;
    }

}
