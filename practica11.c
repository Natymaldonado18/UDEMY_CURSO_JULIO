// Práctica 11
// Realizado por: Nathalia Maldonado
// Programa que contabiliza el numero de personas con pesos mayores o menores al promedio
#include <stdio.h>

int main(){
    float pesos[5];
    float suma = 0;

    for (int i=0; i<5; i++){
        printf("Intoduce un peso para almacenarlo \n");
        scanf("%f", &pesos[i]);
        suma = suma + pesos[i];
    }

    float promedio = suma/5;
    int cont_mayor_igual = 0;
    int cont_menor = 0;
    
    for (int i=0; i<5; i++){
        if (pesos[i] >= promedio){
            cont_mayor_igual ++;
        }
        else{
            cont_menor++;
        }
    }
    printf("numero de pesos mayores o iguales que el promedio: %d, numero de pesos menores que el promedio: %d", cont_mayor_igual, cont_menor);
}