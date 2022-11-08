#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

// Ingresar N cadenas en minúsculas y ordenarlas alfabéticamente.
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
    int n;
    int cicloA, cicloB;
    printf("Ingrese la cantidad de cadenas que desea agregar: ");
    scanf("%d", &n);
    char aux[20];
    char strings[n][30];

    for (cicloA = 0; cicloA < n; cicloA++)
    {
        do
        {
            printf("Ingresa una cadena: ");
            scanf("%s", &strings[cicloA]);
        } while (!minuscula(strings));
    }

    for (cicloA = 1; cicloA < n; cicloA++)
        for (cicloB = 0; cicloB < n - cicloA; cicloB++)
            if (strcmp(strings[cicloB], strings[cicloB + 1]) > 0)
            {
                strcpy(aux, strings[cicloB]);
                strcpy(strings[cicloB], strings[cicloB + 1]);
                strcpy(strings[cicloB + 1], aux);
            }

    printf("\n \nCadenas ordenadas alfabeticamente \n");
    for (cicloA = 0; cicloA < 5; cicloA++)
    {
        printf("%s \n", strings[cicloA]);
    }

    return 0;
}