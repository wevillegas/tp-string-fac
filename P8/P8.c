#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char palabra[20];
    printf("Ingresar una palabra en mayuscula: ");
    fgets(palabra, 20, stdin);

    for (int i = 0; palabra[i] != '\0'; i++)
    {
        palabra[i] = tolower(palabra[i]);
    }
    printf("%s", palabra);
    return 0;
}