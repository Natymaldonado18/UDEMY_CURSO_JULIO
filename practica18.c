// Práctica 18
// Realizado por: Nathalia Maldonado
// Multiplicación de un vector por un valor
#include <stdio.h>

void multiplicacion_vector (int *vector, int nElem, int numero){
    for (int i=0; i<nElem; i++){
       *(vector+i)= *(vector+i) * numero;
    }
}

int main ()
{
    int vector[10] = {1,2,3,4,5,6,7,8,9,10};
    multiplicacion_vector (&vector[0],10,3);

    for (int i=0; i<10; i++) {
        printf("%d  ", vector[i]);
    }
}
