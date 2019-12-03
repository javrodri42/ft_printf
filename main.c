#include <stdio.h>
#include <unistd.h>

/*int ft_printf(const char *str, ...)
{
    int i;

    i = 0;
    while (str[i] != '%')
    {
        write(1, &str[i], 1);
        i++;
    }
    return 0;
}*/

int ft_printf(const char *str, ...);

int main()
{
    printf("Esto es una prueba controlada %s\n", "Hello World!");
    ft_printf("\nEsto es una prueba %s", "Hello World!");
    return 0;
}