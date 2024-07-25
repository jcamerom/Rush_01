/*
Assignment name  : ft_countdown
Expected files   : ft_countdown.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays all digits in descending order, followed by a
newline.

Example:
$> ./ft_countdown | cat -e
9876543210$
$>
*/

#include <unistd.h>

void	ft_countdown(void)
{
	char	a;

	a = '9';
	while (a <= 9 && a >= 0)
	{
		write (1, &a, 1);
		a--;
	}
	write (1, "\n", 1);
}

int	main(void)
{
	ft_countdown();
}
