#include <stdio.h>
#include "funciones.h"

int main(void) {
    int a=0;
    int b=0;
    saludo();
    while (1) {
        scanf("%d", &a);
        scanf("%d", &b);
        int resultado=resta(a,b);
        printf("La resta es : %d\n",resultado);
    }
    return 0;

}
