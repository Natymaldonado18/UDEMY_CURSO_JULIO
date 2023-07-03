// Práctica 14
// Realizado por: Nathalia Maldonado
// Cadenas enlazadas
#include <stdio.h>

int main ()
{
    char cadena1 [50];
    char cadena2 [50];
    char cadena3 [50];
    char cadena4 [50];

    printf("Introduzca la cadena N:1\n");
    gets(cadena1);
    printf("Introduzca la cadena N:2\n");
    gets(cadena2);
    printf("Introduzca la cadena N:3\n");
    gets(cadena3);
    printf("Introduzca la cadena N:4\n");
    gets(cadena4);

    printf("%s-%s-%s-%s", cadena1,cadena2,cadena3,cadena4);
}