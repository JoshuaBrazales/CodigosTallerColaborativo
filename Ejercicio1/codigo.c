#include <stdio.h>
#include <string.h>

#define MAX_GENEROS 5

const char* generos[MAX_GENEROS] = {"Jazz", "Funk", "Pop", "Reguetón", "Clásico"};

typedef struct {
    int vinilos;
    int cds;
    int cassettes;
} Inventario;

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
        
        do {
            printf("Cantidad de vinilos: ");
            scanf("%d", &inventario[i].vinilos);
            if (inventario[i].vinilos < 0) {
                printf("No se debe ingresar numeros negativos. Intente nuevamente.\n");
            }
        } while (inventario[i].vinilos < 0);

        do {
            printf("Cantidad de CDs: ");
            scanf("%d", &inventario[i].cds);
            if (inventario[i].cds < 0) {
                printf("No se debe ingresar numeros negativos. Intente nuevamente.\n");
            }
        } while (inventario[i].cds < 0);

        do {
            printf("Cantidad de cassettes: ");
            scanf("%d", &inventario[i].cassettes);
            if (inventario[i].cassettes < 0) {
                printf("No se debe ingresar numeros negativos. Intente nuevamente.\n");
            }
        } while (inventario[i].cassettes < 0);
    }
}

void modificarInventario(Inventario inventario[MAX_GENEROS]) {
    int opcion;
    printf("\nObserve el numero del genero que quiere editar:");
    scanf("%d", &opcion);

    if (opcion > 0 && opcion <= MAX_GENEROS) {
        int generoIndex = opcion - 1;

        do {
            printf("\nAhora estas modificando datos para el género %s:\n", generos[generoIndex]);
            printf("   Cantidad de vinilos (actual: %d): ", inventario[generoIndex].vinilos);
            scanf("%d", &inventario[generoIndex].vinilos);
            if (inventario[generoIndex].vinilos < 0) {
                printf("No se debe ingresar numeros negativos. Intente nuevamente.\n");
            }
        } while (inventario[generoIndex].vinilos < 0);

        do {
            printf("Cantidad de CDs (actual: %d): ", inventario[generoIndex].cds);
            scanf("%d", &inventario[generoIndex].cds);
            if (inventario[generoIndex].cds < 0) {
                printf("No se debe ingresar numeros negativos. Intente nuevamente.\n");
            }
        } while (inventario[generoIndex].cds < 0);

        do {
            printf("Cantidad de cassettes (actual: %d): ", inventario[generoIndex].cassettes);
            scanf("%d", &inventario[generoIndex].cassettes);
            if (inventario[generoIndex].cassettes < 0) {
                printf("No se debe ingresar numeros negativos. Intente nuevamente.\n");
            }
        } while (inventario[generoIndex].cassettes < 0);
    } else {
        printf("No valido.\n");
    }
}

int main() {
    Inventario inventario[MAX_GENEROS] = {0};
    int opcion;
    char continuar;

    printf("Bienvenido al inventario. A continuación, agregue los datos de cada género.\n");

    do {
        ingresarInventario(inventario);

        do {
            mostrarInventario(inventario);
            printf("\nQuiere modificar la información de algún género? (s/n): ");
            scanf(" %c", &continuar);

            if (continuar == 's') {
                modificarInventario(inventario);
            }
        } while (continuar == 's');

        printf("\nQuiere ingresar nuevamente el inventario? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's');

    printf("Gracias por ingresar los datos\n");
    return 0;
}