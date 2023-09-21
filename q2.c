#include <stdio.h>

int main(){
    int num;
    int soma = 0;

    printf("digite o numero desejado:\n");
    scanf("%d", &num);

    for (int i = num; i != 0; i = i/10)
    {
        soma += i % 10;
        
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
