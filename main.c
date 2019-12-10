/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 09:46:33 by javrodri          #+#    #+#             */
/*   Updated: 2019/12/10 18:11:25 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"

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

//int ft_printf(const char *str, ...);

int main()
{
	printf("\n");
	//printf("\n");
    printf("Esto es una prueba %i \n", 42);
    ft_printf("Esto es una prueba %i", 42);
	
	//printf("\n");
	printf("\n");
	printf("\n");
	printf("%i\n", -33);
	ft_printf("%i", -33);
	//printf("\n");
	printf("\n");
	printf("\n");
	printf("%-7i\n", 33);
	ft_printf("%-7i", 33);
	printf("\n");
	//printf("%.*d",0 , 0);
    return 0;
}