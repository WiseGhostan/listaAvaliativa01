#include <stdio.h>

int main(int argc, char const *argv[])
{
    int senha, tentativa;

    scanf("%d", &senha);
    printf("senha cadastrada: %d\n", senha);
    scanf("%d", &tentativa);
    while (tentativa != senha)
    {
        printf("senha invalida!\n");
        scanf("%d", &tentativa);
    }
    if (tentativa == senha)
    {
        printf("senha valida!\n");
    }
    

    
    return 0;
}
