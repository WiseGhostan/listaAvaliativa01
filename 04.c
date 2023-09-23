#include <stdio.h>

int main()
{
    double salario;
    char funcionario;
    scanf("%c", &funcionario);
    scanf("%lf", &salario);
    if (funcionario == 'a')
    {
        salario = salario*1.05;
    }
        if (funcionario == 'b')
    {
        salario = salario*1.07;
    }
        if (funcionario == 'c')
    {
        salario = salario*1.08;
    }
    printf("R$ %.2lf", salario);
    return 0;
}
