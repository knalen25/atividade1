#include <stdio.h>

//trocar float por double

int main(){
    int senha, login;
  
    printf("cadastre sua senha:");
    scanf("%d", &senha);
    
    printf("digite a senha para fazer login:");
    scanf("%d",&login);
    

    if (senha == login)
    {
        printf("senha valida!");
    }
  
    for (; senha != login;)
    {
        printf ("\nsenha invalida!");
        printf("\ndigite a senha novamente para fazer o login:");
        scanf("%d", &login);

        if (senha == login)
    {
        printf("senha valida!");
    }

    }
    

    
    

    
}
