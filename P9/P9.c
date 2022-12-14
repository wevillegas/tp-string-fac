#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

// Ingresar una palabra en minúsculas y convertir las consonantes en mayúsculas. Presentar ambas palabras.
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

int main()
{
    char palabra[30];
    do
    {
        printf("Ingresar palabra en minuscula: ");
        fgets(palabra, 30, stdin);
    } while (!minuscula(palabra));

    char palabraMod[strlen(palabra)];
    for (int i = 0; palabra[i] != '\0'; i++)
    {
        if (palabra[i] == 'a' || palabra[i] == 'e' || palabra[i] == 'i' || palabra[i] == 'o' || palabra[i] == 'u')
        {
            palabraMod[i] = palabra[i];
        } else {
            palabraMod[i] = toupper(palabra[i]);
        }
        
    }
    printf("Palabra: %s \nPalabra modificada: %s \n", palabra, palabraMod);
    return 0;
}