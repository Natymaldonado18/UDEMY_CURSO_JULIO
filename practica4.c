// Práctica 4
// Realizado por: Nathalia Maldonado
// Conversor de divisas (euros)
#include <stdio.h>
int main ()
{
    float euros;

    printf ("Introducir los euros que desea convertir\n");
    scanf ("%f",&euros);

    printf("%.2f euros equivalen a: %.2f pesetas",euros,euros*166.386);
}