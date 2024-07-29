#include <unistd.h>

void ft_putnbr(int nb) {
    char buffer[20]; // Tamaño suficiente para almacenar un número entero
    int i = 0;
    int is_negative = 0;
    
    if (nb < 0) {
        is_negative = 1;
        nb = -nb; // Convertir el número a positivo
    }
    
    if (nb == 0) {
        buffer[i++] = '0';
    } else {
        while (nb > 0) {
            buffer[i++] = nb % 10 + '0'; // Convertir el dígito a su representación en carácter
            nb /= 10;
        }
    }
    
    if (is_negative) {
        buffer[i++] = '-';
    }
    
    while (i > 0) {
        write(1, &buffer[--i], 1); // Escribir los dígitos en orden inverso
    }
    
    write(1, "\n", 1); // Imprimir un salto de línea al final
}

int main() {
    int number = 123; // Puedes cambiar este número por el que desees mostrar
    ft_putnbr(number);
    
    return 0;
}
