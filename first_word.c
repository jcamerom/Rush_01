/*
Assignment name  : first_word
Expected files   : first_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its first word, followed by a
newline.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Examples:

$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...       is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
*/

#include <unistd.h>

void	printer(char a)
{
	write(1, &a, 1);
}

void	main(int argc, char **argv)
{
	int	c;
	int	i;
	int	j;
	
	c = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
	}
	else
	{
		i = 0;
		while(argv[1][i] != '\0')
		{
			if(!(argv[1][i] <= 31 && argv[1][i] == 127))
			{
				if(i == 0 || argv[1][i - 1] == ' ' || argv[1][i - 1] == '\t')
				{
					c++;
					if(c == 1)
					{
						j = 0;
						while(argv[1][i] != ' ' || argv[1][i] != '\t')
						{
							printer(argv[1][j]);
							j++;
						}
						write(1, "\n", 1);
					}
				}
			}
			i++;
		}
		if (c == 0)
		{
			write(1, "\n", 1);
		}
	}
}
