// Práctica 10
// Realizado por: Nathalia Maldonado
// Programa que ejecuta la suma y el promedio de números diferentes a cero
#include <stdio.h>
int main ()
{
    int suma=0,contador=0,numero=-1;

    while (numero!=0) {
        printf ("Introduzca un numero;\n");
        scanf("%d",&numero);
        contador++;
        suma+=numero;
    }

    float promedio = suma/contador;
    printf ("La suma de todos los numeros es: %d y el promedio es: %.2f",suma,promedio);
}