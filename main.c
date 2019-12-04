/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 09:46:33 by javrodri          #+#    #+#             */
/*   Updated: 2019/12/04 09:46:34 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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