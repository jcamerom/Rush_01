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

char	*ft_rev_print (char *str)
{
	int	i;
	char	temp;
	int	strlen;
	
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	strlen = i - 1;
	i = 0;
	while (i < (strlen / 2))
	{
		temp = str[strlen - i];
		str[strlen - i] = str[i];
		str[i] = temp;
		i++;
	}
	return (str);
}

