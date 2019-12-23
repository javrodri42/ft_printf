/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebass.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/23 12:27:11 by javrodri          #+#    #+#             */
/*   Updated: 2019/12/23 12:45:45 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	hexa_count_len(unsigned int hexa);

int main(void)
{
	unsigned int hexa;
	
	hexa = 3267;
	printf("%u\n", hexa_count_len(hexa));
	return (0);
}




unsigned int	hexa_count_len(unsigned int hexa)
{
	int count;
	int temp;

	temp = 0;
	count = 0;
	while(hexa >= 16)
	{
		hexa = hexa / 16;
		count++;
	}
	count++;
	return(count);
	
}