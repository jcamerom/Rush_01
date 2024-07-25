/*
Assignment name  : maff_revalpha
Expected files   : maff_revalpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the alphabet in reverse, with even letters in
uppercase, and odd letters in lowercase, followed by a newline.

Example:

$> ./maff_revalpha | cat -e
zYxWvUtSrQpOnMlKjIhGfEdCbA$
*/

#include <unistd.h>

int	main(void)
{
	char	a;
	int	i;

	a = 'z';
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
		a--;
		i++;
	}
	write (1, "\n", 1);
	return (0);
}
