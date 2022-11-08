#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Ingresar una palabra y generar una nueva palabra que contenga las mismas letras, en mayúsculas, que la ingresada pero separadas por un espacio. Mostrar ambas palabras 
int main()
{
    char palabra[20];

    printf("Ingresar una palabra: ");
    fgets(palabra, 20, stdin);

    printf("\n");
    for (int i = 0; palabra[i] != '\0'; i++)
    {
        palabra[i] = toupper(palabra[i]);
        printf("%c ", palabra[i]);
    }

    return 0;
}