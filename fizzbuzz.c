/*
Assignment name  : fizzbuzz
Expected files   : fizzbuzz.c
Allowed functions: write
--------------------------------------------------------------------------------

Ecrire un programme qui écrit une suite de nombres de 1 à 100 sur la sortie 
standard, tous séparés par une newline. 

Si le nombre est un multiple de 3, le programme doit écrire 'fizz' à la place.

Si le nombre est un multiple de 5, le programme doit écrire 'buzz' à la place.

Si le nombre est un multiple de 3 et un multiple de 5, le programme doit écrire 
'fizzbuzz' à la place.

Exemple:

$>./fizzbuzz
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz
[...]
97
98
fizz
buzz
$>
*/
#include <unistd.h>

int	main(void)
{
	int	i;
	char	num;

	i = 1;
	while (i >= 1 && i <= 100)
	{
		if ((i % 3 = 0) && (i % 5 = 0))
		{
			write(1, "FizzBuzz", 8);
		}
		else if (i % 5 = 0)
		{
			write(1, "Buzz", 4);
		}
		else if (i % 3 = 0)
		{
			write(1, "Fizz", 4);
		}
		else
		{
			num = i + '0';
			write(1, &i, 1);
		}
	return (0);
}
