#include <stdio.h>

int main () {
    int suma = 0;
    int contador = 0;

    for (int i = 1; i <= 100; i++) {
        if (i % 2 != 0) {
            suma += i;
            contador++;
        }
    }
    printf("La suma de todos los números impares del 1 al 100 es: %d", suma);
    printf("Contando la cantidad de números impares, nos da el resultado de: %d", contador);
    return 0;
}
