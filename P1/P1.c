#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Ingresar una palabra, en minúsculas, y presentarla en mayúsculas e invertida.
int main()
{
    char palabra[20];
    printf("Ingresar una palabra en minuscula: ");
    fgets(palabra, 20, stdin);

    int c = 0;
    for (int i = 0; palabra[i] != '\0'; i++)
    {
        palabra[i] = toupper(palabra[i]);
        c++;
    }

    char palabra2[c];
    for (int i = 0; palabra[i] != '\0'; i++)
    {
        palabra2[i] = palabra[i];
    }
    for (int i = strlen(palabra2) - 1; i >= 0; i--)
    {
        printf("%c", palabra2[i]);
    }

    return 0;
}