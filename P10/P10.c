#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

// Ingresar una palabra en mayúsculas y convertir las vocales en minúsculas. Presentar ambas palabras.
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
        printf("Ingresar palabra en mayuscula: ");
        fgets(palabra, 30, stdin);
    } while (!mayuscula(palabra));

    char palabraMod[strlen(palabra)];
    for (int i = 0; palabra[i] != '\0'; i++)
    {
        if (palabra[i] == 'A' || palabra[i] == 'E' || palabra[i] == 'I' || palabra[i] == 'O' || palabra[i] == 'U')
        {
            palabraMod[i] = tolower(palabra[i]);
        }
        else
        {
            palabraMod[i] = palabra[i];
        }
    }
    printf("Palabra: %s \nPalabra modificada: %s \n", palabra, palabraMod);
    return 0;
}