#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Ingresar dos nombres y un apellido, todos en minúsculas, y presentar el apellido y los dos nombres (con la primera letra en mayúsculas) separados solamente por guiones.
int main ()
{
    char nombres[60];
    printf("Ingrese, en minuscula, dos nombres y un apellido: ");
    fgets(nombres, 60, stdin);

    int apellido = 0;
    for (int i = strlen(nombres) - 2; nombres[i] != ' '; i--)
    {
        apellido++;
    }

    int c = 0;
    char nombre[strlen(nombres)];
    for (int i = 0; i < strlen(nombres) - 1; i++)
    {
        if (i < apellido)
        {
            nombre[i] = nombres[i + strlen(nombres) - apellido - 1];
        }
        else if (i == apellido)
        {
            nombre[i] = ' ';
        }
        else
        {
            nombre[i] = nombres[c];
            c++;
        }
    }

    nombre[0] = toupper(nombre[0]);
    for (int i = 0; nombre[i] != '\0'; i++)
    {
        if (nombre[i] == ' ')
        {
            nombre[i + 1] = toupper(nombre[i + 1]);
            nombre[i] = '-';
        }
    }

    printf("\n%s", nombre);
    return 0;
}