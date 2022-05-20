#include <stdio.h>
#include <string.h>

int main()
{
    char string[50];
    int resultado;
    scanf("%s", string);
    resultado = strlen(string);
    printf("%d\n", resultado);
}