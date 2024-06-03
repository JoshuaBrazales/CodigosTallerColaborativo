#include "lectura.h"
#include <stdio.h>

void ingresarDatos(const char* mensaje, int* cantidad) {
    do {
        printf("%s", mensaje);
        scanf("%d", cantidad);
        if (*cantidad < 0) {
            printf("No se debe ingresar números negativos. Intente nuevamente.\n");
        }
    } while (*cantidad < 0);
}

int confirmarAccion(const char* mensaje) {
    char respuesta;
    printf("%s", mensaje);
    scanf(" %c", &respuesta);
    return (respuesta == 's' || respuesta == 'S');
}
