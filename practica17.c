// Práctica 17
// Realizado por: Nathalia Maldonado
// Obtener la media de un vector
#include <stdio.h>

int main ()
{
    float vector[5];

    for (int i=0; i<5; i++) {
        printf("Introduzca un numero real:\n");
        scanf("%f",&vector[i]);
    }

    float *puntero = &vector[0];
    float media = 0;

    for (int i=0; i<5; i++){
        media = media + *(puntero+i);
    }
    media = media/5;

    printf("La media de los valores del vector es: %.2f\n", media);
}