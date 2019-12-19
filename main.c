/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 09:46:33 by javrodri          #+#    #+#             */
/*   Updated: 2019/12/19 09:19:10 by javrodri         ###   ########.fr       */
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
	
	//printf("\n");
	//printf("\n");
    //printf("Esto es una prueba %i \n", 42);
    //ft_printf("Esto es una prueba %i", 42);
	
	//printf("\n");
	//printf("\n");
	//printf("\n");
	//printf("%i\n", -33);
	//ft_printf("%i", -33);
	//printf("\n");
	//printf("\n");
	//printf("\n");
	//printf("%.7i", 33);
	//printf("\n");
	//ft_printf("%.7i %4i", 33, 3);
	//printf("\n");
	//printf("%.*d",0 , 0);
	/*ft_printf("%s||", "12345");
	printf("\n");
	ft_printf("%09s||", "12345");
	printf("\n");
	ft_printf("%*s||", 9, "12345");
	printf("\n");
	ft_printf("%-*s||", 9, "abcdefg");
	printf("\n");
	ft_printf("%.3s||", "abcdefg");
	printf("\n");
	printf("%.3s||", "abcdefg");
	printf("\n");
	//ft_printf("%s||", 9, "12345");
	printf("\n");
	printf("%.7s", "hello");
	printf("||");
	printf("\n");*/
	//printf("%.7s%.3s%.4s", "hello", "pollas", "miculo");
	//printf("%8.1s|", "jelou");
	//printf("%%7.5s, bombastic");
	//printf("\n");
	//printf("|");
	//printf("%3c");
	//printf("|");
	printf("\n");
	//printf("|");
	ft_printf("%3c" );
	printf("|");
		
	printf("\n");
	//printf("//");
	
	
	//ft_printf("%s||", 9, "12345");
	
    return 0;
}