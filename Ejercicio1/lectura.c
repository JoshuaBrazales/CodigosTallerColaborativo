#include <stdio.h>
#include "lectura.h"
#include "operaciones.h"

void mostrarInventario(Inventario inventario[MAX_GENEROS]) {
    printf("\nEste es el inventario actual:\n");
    for (int i = 0; i < MAX_GENEROS; i++) {
        printf("%s\n", generos[i]);
        printf("Vinilos: %d\n", inventario[i].vinilos);
        printf("CDs: %d\n", inventario[i].cds);
        printf("Cassettes: %d\n", inventario[i].cassettes);
    }
}

void ingresarInventario(Inventario inventario[MAX_GENEROS]) {
    for (int i = 0; i < MAX_GENEROS; i++) {
        printf("\nIngrese los datos de %s:\n", generos[i]);
        
        do {
            printf("Cantidad de vinilos: ");
            scanf("%d", &inventario[i].vinilos);
            if (inventario[i].vinilos < 0) {
                printf("No se debe ingresar números negativos. Intente nuevamente.\n");
            }
        } while (inventario[i].vinilos < 0);

        do {
            printf("Cantidad de CDs: ");
            scanf("%d", &inventario[i].cds);
            if (inventario[i].cds < 0) {
                printf("No se debe ingresar números negativos. Intente nuevamente.\n");
            }
        } while (inventario[i].cds < 0);

        do {
            printf("Cantidad de cassettes: ");
            scanf("%d", &inventario[i].cassettes);
            if (inventario[i].cassettes < 0) {
                printf("No se debe ingresar números negativos. Intente nuevamente.\n");
            }
        } while (inventario[i].cassettes < 0);
    }
}

