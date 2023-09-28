#include <stdio.h>

int main(){
    int num;
    int soma = 0;

    //printf("digite o numero desejado:\n");
    scanf("%d", &num);

    for (int i = num; i != 0; i = i/10)
    {
        soma += i % 10;
        
    }
    
    if (num % 2 == 0)
    {
        printf("%d eh par\n", num);
        printf("A soma dos algarismos de %d eh %d\n", num, soma);
    }
    
    else if (num % 2 != 0)
    {
        printf("%d eh impar\n", num);
        printf("A soma dos algarismos de %d eh %d\n", num, soma);
    }
    
    return 0;
    
}
