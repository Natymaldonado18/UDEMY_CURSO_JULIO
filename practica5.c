// Práctica 5
// Realizado por: Nathalia Maldonado
// Análisis de calificaciones de un alumno
#include <stdio.h>
int main ()
{
    int nota;
    printf ("Introduce la nota del alumno:\n");
    scanf ("%d",&nota);

    if (nota<5) {
        printf ("Suspendido");
    }
    else if (nota == 6) {
        printf ("Bien");
    }
    else if (nota == 7 || nota == 8) {
        printf ("Notable");
    }
    else if (nota == 9 || nota == 10) {
        printf ("Sobresaliente");
    }
    else {
        printf ("La nota introducida no es valida");
    }

}