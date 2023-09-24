#include <stdio.h>

int main(){

    char pls;
    double salario, soma;
 
    //printf("digite o nivel de experiencia do funcionario a, b ou c:\n");
    scanf("%c", &pls);

     //printf("digite o salario:\n"); 
    scanf("%lf", &salario);

   
   

    switch (pls)
    {
    case 'a':
        soma = salario + salario*0.05;

        printf("R$ %.2lf\n", soma);    
        break;

    case 'b':
        soma = salario + salario*0.07;
        printf("R$ %.2lf\n", soma);
        break;
    
    case 'c':
        soma = salario + salario*0.08;
        printf("R$ %.2lf\n", soma);
        break;
        
    default:
        printf("nivel de experiencia nao reconhecido");
        break;
    }

}
