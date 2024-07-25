#include <stdio.h>
#include <string.h>

unsigned int    funny(char *dest, char *src, unsigned int size)
{
    unsigned int    size_result;
    
    size_result = strlcpy (dest, src, size);
    return (size_result);
}

int main(void)
{
    char    dest[10];
    char    *src = "Hello World!";
    unsigned int    size = 10;
    unsigned int    size_result;
    
    
    size_result = funny(dest, src, size);
    printf("Destiny copy: s%", dest);
    printf("Quantity size: u%", size_result);
    return (0);
}
