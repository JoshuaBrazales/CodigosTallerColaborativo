#ifndef OPERACIONES_H
#define OPERACIONES_H

#define MAX_GENEROS 5

// Declaración de los géneros
extern const char* generos[MAX_GENEROS];

// Estructura para el inventario
typedef struct {
    int vinilos;
    int cds;
    int cassettes;
} Inventario;

// Prototipos de funciones
void mostrarInventario(Inventario inventario[MAX_GENEROS]);
void ingresarInventario(Inventario inventario[MAX_GENEROS]);
void modificarInventario(Inventario inventario[MAX_GENEROS]);

#endif // OPERACIONES_H
