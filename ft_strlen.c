/*
Assignment name  : ft_strlen
Expected files   : ft_strlen.c
Allowed functions: 
--------------------------------------------------------------------------------

Write a function that returns the length of a string.

Your function must be declared as follows:

int	ft_strlen(char *str);
*/

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	char	str[] = "Hello";
	int	length;
	char	num_len;

	length = ft_strlen(str);
	num_len = length + '0';
	write (1, &num_len, 1); // int + '0' = char
	return (0);
}
