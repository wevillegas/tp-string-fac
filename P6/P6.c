#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Ingresar una palabra y contar cuantas vocales posee. Presentar por pantalla el resultado
int main (){
    char palabra[20];
    printf("Ingresar una palabra: ");
    fgets(palabra, 20, stdin);

    int vocales = 0;
    for (int i = 0; palabra[i] != '\0'; i++)
    {
        palabra[i] = toupper(palabra[i]);
        if (palabra[i] == 'A' || palabra[i] == 'E' || palabra[i] == 'I' || palabra[i] == 'O' || palabra[i] == 'U')
        {
            vocales = vocales + 1;
        }
        
    }
    printf("Hay un total de %d vocales", vocales);
    return 0;
}


