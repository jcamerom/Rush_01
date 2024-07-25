#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
  unsigned int i;
  unsigned int j;
  
  i = 0;
  while(dest[i] != '\0')
  {
    i++;
  }
  j = 0;
  while(src[j] != '\0' && j < nb)
  {
    dest[i + j] = src[j];
    j++;
  }
  dest[i + j] = '\0';
  
  return (dest);
}

int main(void)
{
  char src[] = "Two";
  char dest[100] = "One";
  unsigned int nb = 2;
  
  printf("dest: %s\n", dest);
  ft_strncat(dest, src, nb);
  printf("Concat: %s", dest);
  return (0);
}
