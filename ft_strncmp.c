#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while(s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0') && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}
/*
int main(void)
{
  char s1[] = "Adi";
  char s2[] = "Adios";
  unsigned int  n = 4;
  int result;
  
  result = ft_strncmp(s1, s2, n);
  printf("Result: %d", result);
  result = strncmp(s1, s2, n);
  printf("Result: %d", result);
  return (0);
}
*/
