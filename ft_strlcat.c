#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int j;
	unsigned int dlen;
	unsigned int slen;
	
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	if (size == 0 || size <= dlen)
	{
		return (slen + size);
	}
	j = 0;
	while(src[j] != '\0' && j < (size - dlen - 1))
	{
		dest[dlen + j] = src[j];
		j++;
	}
	dest[dlen + j] = '\0';
	return (slen + dlen);
}

int main(void)
{
  char src[] = "Two";
  char dest[] = "One";
  unsigned int size = 7;
  unsigned int result;
  
  result = ft_strlcat(dest, src, size);
  printf("Concat: %d", result);
  return (0);
}
