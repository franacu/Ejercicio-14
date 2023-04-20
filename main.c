#include <stdio.h>
#include <string.h>
void copiar(char *c1, char *c2)
{
    strcpy(c1,c2);
}

int main()
{
    char cadena1[100];
    char cadena2[100];
    printf("Ingrese cadena de caracteres 1:\n");
    gets(cadena1);
    printf("Ingrese cadena de caracteres 2:\n");
    gets(cadena2);
    printf("Reemplazando cadena 2 en cadena 1:\n");
    copiar(cadena1,cadena2);
    printf("Cadena pero con distinta direccion de memoria:%s\n",cadena1);
    printf("Cadena pero con distinta direccion de memoria:%d\n",&cadena1);
    printf("Nueva cadena pero con distinta direccion de memoria:%s\n",cadena2);
    printf("Nueva cadena pero con distinta direccion de memoria:%d\n",&cadena2);
    return 0;
}
