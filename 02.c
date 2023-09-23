#include <stdio.h>

int main()
{
    int numero, soma = 0, resto;
    scanf("%d", &numero);
    int num = numero;
    if (numero%2 == 0)  
    {
        printf("%d eh par\n", numero);
    }
    else if (numero %2 != 0)
    {
        printf("%d eh impar\n", numero);
    }
    while (numero > 0)
    {
        resto = numero%10;
        numero = numero/10;
        soma = soma + resto;
    }
    printf("A soma dos algarismos de %d eh igual a %d\n", num, soma);
    
    
    return 0;
}
