#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

// Ingresar una palabra en minúsculas o mayúsculas (contemplar ambos casos) y reemplazar cada consonante por dos signos +. Presentar ambas palabras.
bool minuscula(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != tolower(str[i]))
        {
            return false;
        }
    }
    return true;
}

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
        printf("Escriba una palabra en mayuscula o minuscula: ");
        fgets(palabra, 30, stdin);
    } while (!mayuscula(palabra) && !minuscula(palabra));

    char palabraMod[40];
    int p = 0;
    for (int i = 0; palabra[i] != '\0'; i++)
    {
        if (palabra[i] != 'a' && palabra[i] != 'e' && palabra[i] != 'i' && palabra[i] != 'o' && palabra[i] != 'u' && palabra[i] != 'A' && palabra[i] != 'E' && palabra[i] != 'I' && palabra[i] != 'O' && palabra[i] != 'U')
        {
            palabraMod[p] = '+';
            palabraMod[p + 1] = '+';
            p += 2;
        }
        else
        {
            palabraMod[p] = palabra[i];
            p++;
        }
    }
    printf("Palabra: %s \nPalabra modificada: %s \n", palabra, palabraMod);
    return 0;
}