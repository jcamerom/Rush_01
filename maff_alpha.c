/*
Assignment name  : maff_alpha
Expected files   : maff_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Escriba un programa que muestre el alfabeto, con letras pares en mayúsculas,
y letras impares en minúsculas, seguidas de una línea.

Example:

$> ./maff_alpha | cat -e
aBcDeFgHiJkLmNoPqRsTuVwXyZ$
*/

#include <unistd.h>

void	ft_maff_alpha(void)
{
	char	a;
	int	i;

	a = 'a';
	i = 1;
	while ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
	{
		if (i % 2 != 0)	
		{
			write (1, &a, 1);
		}
		else
		{
			a = a - 32;
			write (1, &a, 1);
			a = a + 32;
		}
		a++;
		i++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	ft_maff_alpha();
	return (0);
}
