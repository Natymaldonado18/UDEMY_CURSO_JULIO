// Práctica 3
// Realizado por: Nathalia Maldonado
// Calcular el área de un rectángulo
#include <stdio.h>
int main ()
{
    float base,altura;

    printf ("Ingresar la base del rectangulo\n");
    scanf ("%f",&base);

    printf ("Ingrese la altura del rectangulo\n");
    scanf ("%f",&altura);
    float area = base * altura;

    printf("El area del rectangulo de base %.2f y altura %.2f es: %.2f",base,altura,area);
}