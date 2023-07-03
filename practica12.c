// Práctica 12
// Realizado por: Nathalia Maldonado
// Programa que muesta los máximos y mínimos de un vector
#include <stdio.h>

int main ()
{
    int vector[10] = {4,7,9,75,-5,6,12,-18,0,1};
    int maximo = vector[0];
    int minimo = vector[0];

    for (int i=1;i<10;i++){
        if (vector[i]>maximo) {
            maximo = vector[i];
        }

        if (vector[i]<minimo) {
            minimo = vector[i];
        }
    }

    printf ("El valor maximo es: %d\nEl valor minimo es: %d", maximo, minimo);
}