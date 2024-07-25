#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
  int i;
  int j;
  
  i = 0;
  while(str[i] != '\0')
  {
    j = 0;
    if (str[i] = to_find[j]){
      while(str[i] = to_find[j]){
        j++;
        i++;
      }
    }
    
    
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
  char str[] = "OneTwoThree";
  char to_find[] = "Two";
  
  ft_strstr(str, to_find);
  printf("Concat: %s", dest);
  return (0);
}
