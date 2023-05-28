#include <stdio.h>

void obtenerValores(int* a, float* b) {
    *a = 10;
    *b = 20;
}

int main() {
    int x;
    float y;

    obtenerValores(&x, &y);
    printf("Valor de x: %d\n", x);
    printf("Valor de y: %0.2f\n", y);
    return 0;
}
