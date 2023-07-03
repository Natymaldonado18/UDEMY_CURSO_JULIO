// Práctica 2
// Realizado por: Nathalia Maldonado
// Introducir 3 caracteres e imprimierlos (caracteres enlazados)
#include <stdio.h>
int main ()
{
    char caracter1, caracter2, caracter3;

    printf ("Introducir 3 caracteres\n");
    scanf ("%c %c %c",&caracter1,&caracter2,&caracter3);

    printf ("%c-%c-%c",caracter1,caracter2,caracter3);
}