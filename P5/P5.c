#include <stdio.h>;
#include <string.h>
#include <ctype.h>;
#include <stdbool.h>;

// Ingresar una palabra en mayúsculas (controlar) y eliminar de la misma la cadena "CA" cada vez que la encuentre.
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
    char palabra[30];
    do
    {
        printf("Ingresar una palabra en mayuscula: ");
        fgets(palabra, 30, stdin);
    } while (!mayuscula(palabra));

    for (int i = 0; palabra[i] != '\0'; i++)
    {
        if ((palabra[i] == 'C' && palabra[i + 1] == 'A') || (palabra[i] == 'A' && palabra[i - 1] == 'C'))
        {
            continue;
        }
        printf("%c", palabra[i]);
    }

    return 0;
}