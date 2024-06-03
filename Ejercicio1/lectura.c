#include "lectura.h"
#include <stdio.h>

int leerEnteroPositivo(const char* mensaje) {
    int valor;
    do {
        printf("%s: ", mensaje);
        scanf("%d", &valor);
        if (valor < 0) {
            printf("No se debe ingresar números negativos. Intente nuevamente.\n");
        }
    } while (valor < 0);
    return valor;
}

int leerEntero(const char* mensaje) {
    int valor;
    printf("%s: ", mensaje);
    scanf("%d", &valor);
    return valor;
}
