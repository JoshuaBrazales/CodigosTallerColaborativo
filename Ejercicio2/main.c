#include <stdio.h>
#include "operaciones.h"
#include "lectura.h"

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
