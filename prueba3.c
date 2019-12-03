#include <stdio.h>
#include <stdarg.h>

int sum(int num_args, ...)
{
    int val = 0;
    va_list x;
    int i = 0;
    
    va_start(x, num_args);
    while (i < num_args)
    {
        val += va_arg(x, int);
        i++;
    }
    va_end(x);
    return(val);
}

int main()
{
    printf("%d\n", sum(9, 1, 2, 3, 4, 5, 6, 7, 8, 9));
    return 0;
}