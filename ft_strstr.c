#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	
	i = 0;
	while(str[i] != '\0')
	{
		j = 0;
		while(str[i + j] == to_find[j] && to_find[j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (str + i);
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char str[] = "OneTwoThree";
	char to_find[] = "Two";
	
	char *result = ft_strstr(str, to_find);

	if (result != NULL)
	{
		printf("Subcadena encontrada: %s", result);
	}
	else
	{
		printf("Subcadena no encontrada");
	}
	return (0);
}
