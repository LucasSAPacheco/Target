#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main(void)
{
    int indice = 13;
    int soma = 0;
    int k = 0;

    while (k < indice)
    {
        k = k + 1;
        soma = soma + k;
    }
    printf("Soma: %d\n", soma);
}