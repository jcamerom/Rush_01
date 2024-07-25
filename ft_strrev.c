/*
Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions: 
--------------------------------------------------------------------------------

Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);
*/

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int	i;
	int	j;
	char	temp;

	i = 0;
	while (str[i])
	{
		i++;
	}
	i--;
	j = 0;
	while (j < i / 2)
	{
		temp = str[j];
		str[j] = str[i];
		str[i] = temp;
		j++;
		i--;
	}
	return (str);
}
/*
int	main(void)
{
	char str[] = "Hello!";

	ft_strrev(str);
	printf("Reverse: %s", str);
	return (0);
}
*/
