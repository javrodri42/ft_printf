/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 10:23:51 by javrodri          #+#    #+#             */
/*   Updated: 2019/12/13 18:42:52 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	*str = "1234567";

	printf("%s", str);
	printf("||");
	printf("\n");
	printf("%-2s", str);
	printf("||");
	printf("\n");
	printf("%.4s", str);
	printf("||");
	printf("\n");
	printf("%-9s", str);
	printf("||");
	printf("\n");
	printf("%09s", str);
	printf("||");
	printf("\n");
	printf("%*d", 1, 10);
	printf("||");
	printf("\n");
}