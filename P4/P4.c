#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Ingresar una palabra que posea por lo menos 5 caracteres (no permitir que ingrese una palabra más corta)
//convertir sus caracteres a mayúsculas y con esta palabra generar una nueva palabra constituida por los dos primeros y los dos últimos caracteres de la misma.
int largo(char x[])
{
    int count = 0;
    for (int i = 0; x[i] != '\0'; i++)
    {
        count++;
    }
    return count - 1;
}

int main()
{
    char palabra[20];
    do
    {
        printf("Ingrese una palabra: ");
        fgets(palabra, 20, stdin);
    } while (largo(palabra) < 5);

    printf("\n%c%c%c%c", toupper(palabra[0]), toupper(palabra[1]), toupper(palabra[strlen(palabra) - 3]), toupper(palabra[strlen(palabra) - 2]));
    return 0;
}