#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;


    scanf("%d",&a);


    scanf("%d", &b);

    if (a==0 && b!=0)
    {
        printf("%d eh maior que %d\n", b, a);
        printf("%d nao eh multiplo de %d\n", b, a);   
    }
    
    else if (b==0 && a!=0)
    {
        printf("%d eh maior que %d\n", a, b);
        printf("%d nao eh multiplo de %d\n", a, b);
    }
    

    else if (a > b && a%b == 0)
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
        printf("Os valores lidos sao iguais");
    }
    
    
    
    return 0;
    
}
