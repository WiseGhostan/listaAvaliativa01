#include <stdio.h>

int main(int argc, char const *argv[])
{
    int anoEntrada;

        scanf("%d", &anoEntrada);
       
            if (anoEntrada%4 == 2)
            {
                printf("A Copa do Mundo de Futebol ocorreu no ano de %d.\n", anoEntrada);
            }
            else if (anoEntrada%4 == 0)
            {
                printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d.\n", anoEntrada);
            }
            else
            {
                printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n", anoEntrada);
            }

    
    return 0;
}
