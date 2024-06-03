#include "operaciones.h"
#include "lectura.h"
#include <stdio.h>

const char* generos[5] = {"Jazz", "Funk", "Pop", "Reguetón", "Clásico"};
int vinilos[5] = {0};
int cds[5] = {0};
int cassettes[5] = {0};

void mostrarInventario() {
    printf("\nEste es el inventario actual:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d. %s\n", i + 1, generos[i]);
        printf("   Vinilos: %d\n", vinilos[i]);
        printf("   CDs: %d\n", cds[i]);
        printf("   Cassettes: %d\n", cassettes[i]);
    }
}

void ingresarInventario() {
    for (int i = 0; i < 5; i++) {
        printf("\nIngrese los datos de %s:\n", generos[i]);
        ingresarDatos("Cantidad de vinilos: ", &vinilos[i]);
        ingresarDatos("Cantidad de CDs: ", &cds[i]);
        ingresarDatos("Cantidad de cassettes: ", &cassettes[i]);
    }
}

void modificarInventario() {
    int opcion;
    printf("\nIngrese el número del género que quiere editar: ");
    scanf("%d", &opcion);

    if (opcion > 0 && opcion <= 5) {
        int generoIndex = opcion - 1;
        printf("\nAhora estás modificando datos para el género %s:\n", generos[generoIndex]);
        ingresarDatos("Cantidad de vinilos (actual): ", &vinilos[generoIndex]);
        ingresarDatos("Cantidad de CDs (actual): ", &cds[generoIndex]);
        ingresarDatos("Cantidad de cassettes (actual): ", &cassettes[generoIndex]);
    } else {
        printf("Opción no válida.\n");
    }
}
