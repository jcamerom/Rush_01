#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
  int i;
  int j;
  
  i = 0;
  while(dest[i] != '\0')
  {
    i++;
  }
  j = 0;
  while(src[j] != '\0')
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
  
  printf("dest: %s\n", dest);
  ft_strcat(dest, src);
  printf("Concat: %s", dest);
  return (0);
}
