#include "operaciones.h"
#include "lectura.h"
#include <stdio.h>
#include <string.h>

// Definición de los géneros
const char* generos[MAX_GENEROS] = {"Jazz", "Funk", "Pop", "Reguetón", "Clásico"};

// Implementación de funciones

void mostrarInventario(Inventario inventario[MAX_GENEROS]) {
    printf("\nEste es el inventario actual:\n");
    for (int i = 0; i < MAX_GENEROS; i++) {
        printf("%d. %s\n", i + 1, generos[i]);
        printf("Vinilos: %d\n", inventario[i].vinilos);
        printf("CDs: %d\n", inventario[i].cds);
        printf("Cassettes: %d\n", inventario[i].cassettes);
    }
}

void ingresarInventario(Inventario inventario[MAX_GENEROS]) {
    for (int i = 0; i < MAX_GENEROS; i++) {
        printf("\nIngrese los datos de %s:\n", generos[i]);
        
        inventario[i].vinilos = leerEnteroPositivo("Cantidad de vinilos");
        inventario[i].cds = leerEnteroPositivo("Cantidad de CDs");
        inventario[i].cassettes = leerEnteroPositivo("Cantidad de cassettes");
    }
}

void modificarInventario(Inventario inventario[MAX_GENEROS]) {
    int opcion;
    printf("\nObserve el numero del genero que quiere editar:");
    scanf("%d", &opcion);

    if (opcion > 0 && opcion <= MAX_GENEROS) {
        int generoIndex = opcion - 1;

        printf("\nAhora estas modificando datos para el género %s:\n", generos[generoIndex]);
        inventario[generoIndex].vinilos = leerEnteroPositivo("   Cantidad de vinilos (actual)");
        inventario[generoIndex].cds = leerEnteroPositivo("Cantidad de CDs (actual)");
        inventario[generoIndex].cassettes = leerEnteroPositivo("Cantidad de cassettes (actual)");
    } else {
        printf("No valido.\n");
    }
}
