Assignment name  : ft_swap
Expected files   : ft_swap.c
Allowed functions: 
--------------------------------------------------------------------------------

Escribe una función que intercambie el contenido de dos enteros cuyas direcciones
se pasan como parámetros.

Your function must be declared as follows:

void	ft_swap(int *a, int *b);

#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	a;
	int	b;

	a = 3;
	b = 5;
	printf("Result: %d y %d", a, b);
	ft_swap(&a, &b);
	printf("Result; %d y %d", a, b);
	return (0);
}
