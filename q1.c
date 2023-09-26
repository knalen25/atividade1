#include <stdio.h>


int main(){
    int ano,r, resto;

    //printf("digite o ano:\n");
    scanf("%d", &ano);

    r = ano - 1930;
    resto = r%4;

    if (ano>=1896 && ano<=1929)
    {
            if (ano == 1896)
            {
                printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d.\n", ano);
            }
            

            else if (ano%4 == 0){
                printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d.\n", ano);
            }
            else if(ano%4 != 0)
            {
                  printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n", ano);
             } 
      
    }

    else if (ano%4 == 0 && ano > 1896 && ano<=2022)
    {
        printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d.\n", ano);
    }
    
    
    else if (ano>= 1930 && ano<=2022)
    {
          if(r == 0)
    {
        printf("A Copa do Mundo de Futebol ocorreu no ano de %d.\n", ano);
    }

    else if (resto == 0)
    {
       printf("A Copa do Mundo de Futebol ocorreu no ano de %d.\n", ano);

    }
    else
    {
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n", ano);
    }

    }

    else if (ano>2022)
    {
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n", ano);
    }
    
    else if(ano<1896){
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n", ano);
    }
    
    
     
}
