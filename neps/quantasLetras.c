#include <stdio.h>
#include <string.h>

int main()
{
    char string[50], caractere;
    int tamanho, contador = 0, i;
    scanf("%s", string);
    scanf(" %c", &caractere);
    tamanho = strlen(string);

    for (i = 0; i < tamanho; i++)
    {
        if (string[i] == caractere)
        {
            contador++;
        }
    }
    printf("%d\n", contador);
}