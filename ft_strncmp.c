#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}
	i = 1;
	while(i < n && *s1 == *s2)
	{
		s1++;
		s2++;
		i++;
	}
	return (*s1 - *s2);
}

int main(void)
{
  char s1[] = "Adi";
  char s2[] = "Adios";
  unsigned int  n = 3;
  int result;
  
  result = ft_strncmp(s1, s2, n);
  printf("Result: %d", result);
  return (0);
}
