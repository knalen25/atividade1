#include <stdio.h>

int main(){
    int num;
    int soma = 0;

    printf("digite o numero desejado\n");
    scanf("%d", &num);

    for (; num != 0; num = num/10)
    {
        soma += num % 10;
        
    }
    
    if (num % 2 == 0)
    {
        printf("Numero par e a soma dos algarismos e: %d\n", soma);
    }
    
    else if (num % 2 != 0)
    {
        printf("Numero impar e a soma dos algarismos e: %d\n", soma);
    }
    
    return 0;
    
}
