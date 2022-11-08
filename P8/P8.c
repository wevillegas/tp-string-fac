#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

// Ingresar una palabra en mayúsculas y presentarla en minúsculas.
bool mayuscula(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != toupper(str[i]))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    char palabra[20];
    do
    {
        printf("Ingresar una palabra en mayuscula: ");
        fgets(palabra, 20, stdin);

    } while (!mayuscula(palabra));

    for (int i = 0; palabra[i] != '\0'; i++)
    {
        palabra[i] = tolower(palabra[i]);
    }
    printf("%s", palabra);
    return 0;
}