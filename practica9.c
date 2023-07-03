// Práctica 9
// Realizado por: Nathalia Maldonado
// Programa que muestra el número de aprobados o reprobados de acuerdo a sus calificaciones
#include <stdio.h>
int main ()
{
    int alumnos,contador_aprobado=0,contador_suspendido=0;
    float nota;

    printf ("Introduce el numero de alumnos\n");
    scanf ("%d",&alumnos);

    for (int i=1; i<=alumnos; i++) {
        printf ("Introduzca la nota del estudiante: %d\n",i);
        scanf ("%f",&nota);

        if (nota>=5) {
            contador_aprobado++;
        }
        else {
            contador_suspendido++;
        }
    }

printf ("El numero de alumnos aprobados es: %d y el de alumnos suspendidos es: %d",contador_aprobado,contador_suspendido);
}