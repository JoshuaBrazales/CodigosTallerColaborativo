#include <stdio.h>

const char* generos[] = {"Jazz", "Funk", "Pop", "Reguetón", "Clásico"};
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

void ingresarDatos(const char* mensaje, int* cantidad) {
    do {
        printf("%s", mensaje);
        scanf("%d", cantidad);
        if (*cantidad < 0) {
            printf("No se debe ingresar números negativos. Intente nuevamente.\n");
        }
    } while (*cantidad < 0);
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

int confirmarAccion(const char* mensaje) {
    char respuesta;
    printf("%s", mensaje);
    scanf(" %c", &respuesta);
    return (respuesta == 's' || respuesta == 'S');
}

int main() {
    printf("Bienvenido al inventario. A continuación, agregue los datos de cada género.\n");

    do {
        ingresarInventario();

        do {
            mostrarInventario();
            if (!confirmarAccion("\n¿Quiere modificar la información de algún género? (s/n): ")) {
                break;
            }
            modificarInventario();
        } while (1);

    } while (confirmarAccion("\n¿Quiere ingresar nuevamente el inventario? (s/n): "));

    printf("Gracias por ingresar los datos\n");
    return 0;
}
