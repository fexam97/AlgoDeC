#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int funcionAtoi(const char *str);

int main() {
    char str[] = "1234";
    int num = funcionAtoi(str);
    printf("El numero convertido es: %d\n", num);
    return 0;
}


int funcionAtoi(const char *str) {
    int result = 0;
    int sign = 1;
    int i = 0;

    // Ignorar espacios en blanco iniciales
    while (isspace(str[i]))
        i++;

    // Verificar el signo del número
    if (str[i] == '+' || str[i] == '-') {
        sign = (str[i] == '-') ? -1 : 1;
        i++;
    }

    // Convertir los dígitos a entero
    while (isdigit(str[i])) {
        result = (result * 10) + (str[i] - '0');
        i++;
    }

    return sign * result;
}
