#include <stdio.h>
#include <string.h>
#include "funciones.h"

void listarProductos(char productos[10][3][40], double precio[], int indice[]) {
    printf("Numero\tNombre\t\tCategoria\tMarca\tPrecio\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\t%s\t%s\t%s\t%.2f\n", indice[i], productos[i][0], productos[i][1], productos[i][2], precio[i]);
    }
}

void buscarXMarca(char productos[10][3][40], double precio[]) {
    char marca[40];
    printf("Ingrese la marca a buscar: ");
    scanf("%s", marca);

    printf("Numero\tNombre\t\tCategoria\tMarca\tPrecio\n");
    for (int i = 0; i < 10; i++) {
        if (strcmp(productos[i][2], marca) == 0) {
            printf("%d\t%s\t%s\t%s\t%.2f\n", i + 1, productos[i][0], productos[i][1], productos[i][2], precio[i]);
        }
    }
}

void buscarXCategoria(char productos[10][3][40], double precio[]) {
    char categoria[40];
    printf("Ingrese la categoria a buscar: ");
    scanf("%s", categoria);

    printf("Numero\tNombre\t\tCategoria\tMarca\tPrecio\n");
    for (int i = 0; i < 10; i++) {
        if (strcmp(productos[i][1], categoria) == 0) {
            printf("%d\t%s\t%s\t%s\t%.2f\n", i + 1, productos[i][0], productos[i][1], productos[i][2], precio[i]);
        }
    }
}

void buscarXPrecioMenor(char productos[10][3][40], double precio[]) {
    double precioMax;
    printf("Ingrese el precio maximo: ");
    scanf("%lf", &precioMax);

    printf("Numero\tNombre\t\tCategoria\tMarca\tPrecio\n");
    for (int i = 0; i < 10; i++) {
        if (precio[i] <= precioMax) {
            printf("%d\t%s\t%s\t%s\t%.2f\n", i + 1, productos[i][0], productos[i][1], productos[i][2], precio[i]);
        }
    }
}

void editarProducto(char productos[10][3][40], double precio[], int indice[]) {
    int numProducto;
    printf("Ingrese el numero del producto a editar: ");
    scanf("%d", &numProducto);
    numProducto -= 1;

    if(numProducto >= 0 && numProducto < 10){
        printf("Ingrese nuevo nombre: ");
        scanf("%s", productos[numProducto][0]);
        printf("Ingrese nueva categoria: ");
        scanf("%s", productos[numProducto][1]);
        printf("Ingrese nueva marca: ");
        scanf("%s", productos[numProducto][2]);
        printf("Ingrese nuevo precio: ");
        scanf("%lf", &precio[numProducto]);
    } 
    else {
        printf("Numero de producto invalido.\n");
    }
}