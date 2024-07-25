/*
Assignment name  : rev_print
Expected files   : rev_print.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that takes a string and displays the string in reverse
order followed by the newline.
Its prototype is constructed like this : 
  char *ft_rev_print (char *str)
It must return its argument

Examples:

$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$
*/

#include <stdio.h>

char	*ft_rev_print(char *str)
{
	int	i;
	int	j;
	char	temp;

	i = 0;
	while(str[i])
	{
		i++;
	}
	j = 0;
	while(j < i / 2)
	{
		temp = str[i - 1];
		str[i - 1] = str[j];
		str[j] = temp;
		j++;
		i--;
	}
	return (str);
}

int	main(void)
{
	char str[] = "hello";

	ft_rev_print(str);
	printf("Reverse: %s", str);
	return (0);
}
