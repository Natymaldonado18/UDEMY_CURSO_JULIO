// Práctica 23
// Realizado por: Nathalia Maldonado
// Suma de números de ficheros
#include <stdio.h>
#include <stdlib.h>

struct producto {
    int codigo;
    char descripcion[50];
    float precio;
};

int main ()
{
    struct producto*prod;

    prod = malloc(sizeof(struct producto));

    printf("Introduzca un codigo numerico:\n");
    scanf("%d", &prod->codigo);
    printf("introduzca la descripcion:\n");
    scanf("%s", &prod->descripcion);
    printf("Introduzca un precio:\n");
    scanf("%f", &prod->precio);

    printf("Codigo del articulo: %d\n", prod->codigo);
    printf("Descripcion del articulo: %s\n", prod->descripcion);
    printf("Precio del articulo: $ %f\n", prod->precio);

    free(prod);
    prod=NULL;
}