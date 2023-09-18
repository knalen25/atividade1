#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;

    printf("digite o valor de A:\n");
    scanf("%d",&a);

    printf("digite o valor de B:\n");
    scanf("%d", &b);

    if (a > b && a%b == 0)
    {
        printf("%d eh maior que %d\n", a, b);
        printf("%d eh multiplo de %d\n", a, b);
        
    }

    else if (a > b && a%b != 0)
    {
        printf("%d eh maior que %d\n", a, b);
        printf("%d nao eh multiplo de %d\n", a, b);
    }

    else if (b > a && b%a == 0)
    {
        printf("%d eh maior que %d\n", b, a);
        printf("%d eh multiplo de %d\n", b, a);
    }

    else if (b > a && b%a != 0)
    {
        printf("%d eh maior que %d\n", b, a);
        printf("%d nao eh multiplo de %d\n", b, a);
    }

    else
    {
        printf("os valores lidos sao iguais");
    }
    
    
    
    
    
}
