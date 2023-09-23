#include <stdio.h>

int main()
{
    int valor1, valor2;
    scanf("%d", &valor1);
    scanf("%d", &valor2);

    if (valor1 == valor2)
    {
        printf("Os valores lidos sao iguais\n");
    }
    else
    {
        if (valor1 > valor2)
        {
            printf("%d eh maior que %d\n", valor1, valor2);
            if (valor1%valor2 == 0)
            {
                printf("%d eh multiplo de %d", valor1, valor2);
            }
            if (valor1%valor2 != 0)
            {
                printf("%d nao eh multiplo de %d", valor1, valor2);
            }
        }
        if (valor1 < valor2)
        {
            printf("%d eh maior que %d\n", valor2, valor1);
            if (valor2%valor1 == 0)
            {
                printf("%d eh multiplo de %d", valor2, valor1);
            }
            if (valor2%valor1 != 0)
            {
                printf("%d nao eh multiplo de %d", valor2, valor1);
            }
        }  
    }
    return 0;
}
