#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Ingresar una palabra y generar una nueva donde se han reemplazado las vocales de la palabra ingresada, por asteriscos (*). Presentar ambas palabras.
int main()
{
    char palabra[20];

    printf("Ingresar una palabra: ");
    fgets(palabra, 20, stdin);

    for (int i = 0; palabra[i] != '\0'; i++)
    {
        palabra[i] = toupper(palabra[i]);
        if (palabra[i] == 'A' || palabra[i] == 'E' || palabra[i] == 'I' || palabra[i] == 'O' || palabra[i] == 'U')
        {
            palabra[i] = '*';
        }
    }

    printf("%s", palabra);

    return 0;
}