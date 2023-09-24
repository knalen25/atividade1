#include <stdio.h>

int main(){
    int senha, login;
  
    //printf("cadastre sua senha:");
    scanf("%d", &senha);

    printf("senha cadastrada: %d\n", senha);
    
    //printf("digite a senha para fazer login:");
    scanf("%d",&login);
    

    if (senha == login)
    {
        printf("senha valida!\n");
    }

  /*while (senha!= login)
  {
        printf ("senha invalida\n");
        printf("digite a senha novamente para fazer o login\n");
  }*/
  
    for (; senha != login;)
    {
        printf ("senha invalida!\n");
        scanf("%d", &login);

        if (senha == login)
    {
        printf("senha valida!\n");
    }

    }
    

    
    

    
}
