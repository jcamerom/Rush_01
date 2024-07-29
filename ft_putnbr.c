#include <unistd.h>

void ft_putnbr(int nb) {
    char buffer[20]; // Tama�o suficiente para almacenar un n�mero entero
    int i = 0;
    int is_negative = 0;
    
    if (nb < 0) {
        is_negative = 1;
        nb = -nb; // Convertir el n�mero a positivo
    }
    
    if (nb == 0) {
        buffer[i++] = '0';
    } else {
        while (nb > 0) {
            buffer[i++] = nb % 10 + '0'; // Convertir el d�gito a su representaci�n en car�cter
            nb /= 10;
        }
    }
    
    if (is_negative) {
        buffer[i++] = '-';
    }
    
    while (i > 0) {
        write(1, &buffer[--i], 1); // Escribir los d�gitos en orden inverso
    }
    
    write(1, "\n", 1); // Imprimir un salto de l�nea al final
}

int main() {
    int number = 123; // Puedes cambiar este n�mero por el que desees mostrar
    ft_putnbr(number);
    
    return 0;
}
