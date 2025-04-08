#include <stdio.h>
#include "funciones.h"


void saludo(void) {
    printf("Hola desde una funcion\n");
}
int resta(int n1, int n2) {
    int respuesta= n1 - n2;
    return respuesta;
}