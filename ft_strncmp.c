#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int result;
	unsigned int i;
  
  i = 0;
  while(i < n && *s1 == *s2)
  {
    s1++;
    s2++;
    i++;
  }
  result = *s1 - *s2;
  return (result);
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
