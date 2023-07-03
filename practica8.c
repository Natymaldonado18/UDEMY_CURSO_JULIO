// Práctica 8
// Realizado por: Nathalia Maldonado
// Imprimir múltiplos de 3 del 1-100
#include <stdio.h>
int main ()
{
    int i;
    for (i=1; i<=100; i++) {
        if (i%3==0) {
            printf ("%d\n",i);
        }
    }
}