// Práctica 6
// Realizado por: Nathalia Maldonado
// Cálculo del precio de un auto
#include <stdio.h>
int main ()
{
    int precio_base,kilometraje;
    float consumo,precio_final;

    printf ("Introducir el precio base del vehiculo:\n");
    scanf ("%d",&precio_base);

    printf ("Introducir los kilometros:\n");
    scanf ("%d",&kilometraje);

    printf ("Introducir el consumo:\n");
    scanf ("%d",&consumo);

    if (kilometraje<20000 && consumo<=5) {
        precio_final = precio_base * 1.2;
    }
    else if (kilometraje>20000 && consumo<=5) {
        precio_final = precio_base * 1.1;
    }
    else if (consumo>5) {
        precio_final = precio_base * 1.05;
    }

    printf("El precio final del vehiculo es: %.2f",precio_final);
}