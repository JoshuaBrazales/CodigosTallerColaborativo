#include <stdio.h>
#include "lectura.h"
#include "operaciones.h"

int main() {
    Inventario inventario[MAX_GENEROS] = {0};
    char continuar;

    printf("Bienvenido al inventario. A continuación, agregue los datos de cada género.\n");

    ingresarInventario(inventario);

    do {
        mostrarInventario(inventario);
        printf("\n¿Quiere modificar la información de algún género? (s/n): ");
        scanf(" %c", &continuar);

        if (continuar == 's') {
            modificarInventario(inventario);
        }
    } while (continuar == 's');

    printf("Gracias por ingresar los datos\n");
    return 0;
}

