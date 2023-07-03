#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"
#include "persistencia.h"

//software para gestion de empleados

int main(){
    
    struct empleado empleados[100];
    int opcion = 0;
    int num_emp = 0;

    num_emp = cargarEmpleados(empleados);

    printf("Bienvenido al gestor de epleados\n");
    mostrarMenu();
    scanf("%d", &opcion);

    while(opcion !=7){
        if(opcion == 1){
            int creado = alta(empleados, num_emp);
            if(creado == 1){
                num_emp++;
            }
        }
        else if(opcion == 2){
            int eliminado = baja(empleados, num_emp);
            if (eliminado == 1){
                num_emp--;
            }
        }
        else if(opcion == 3){
            listarEmpleados(empleados,num_emp);
        }
        else if(opcion == 4){
            consultarDatosEmpleado(empleados, num_emp);
        }
        else if(opcion == 5){
            modificarSueldo(empleados, num_emp);
        }
        else if(opcion == 6){
            modificarHoras(empleados, num_emp);
        }
        mostrarMenu();
        scanf("%d", &opcion);
    }

    guardarEmpleados(empleados, num_emp);
    printf("Gracias por su visita.");
}