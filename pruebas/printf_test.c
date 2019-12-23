/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 14:56:22 by javrodri          #+#    #+#             */
/*   Updated: 2019/12/23 11:02:06 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	//printf("Hello World %*d", 5, 7);
	//printf("\n");
	//printf("%*d", 5, 10);
	printf("\n");
	printf("%x", 17);
	printf("\n");
	printf("%2x", 17);
	printf("\n");
	printf("%6x", 17);
	printf("\n");
	printf("%0X", 4294967295u);
	printf("\n");
	return 0;




	
	static void			putnbrbase(unsigned int nbr, char *base,
					size_t baselen, t_flags *flags)
{
	if (nbr >= baselen)
	{
		putnbrbase(nbr / baselen, base, baselen, flags);
		putnbrbase(nbr % baselen, base, baselen, flags);
	}
	else
	{
		write(1, &base[nbr], 1);
		flags->len++;
	}
}

static void			int_printer(t_flags *flags, unsigned int num,
					char *base)
{
	if ((flags->flag_precision == 1) && (flags->precision == 0) && (num == 0))
	{
		if (flags->width)
		{
			write(1, " ", 1);
			flags->len++;
		}
	}
	else
		putnbrbase(num, base, ft_strlen(base), flags);
}

static unsigned int	nbrlen(unsigned int nbr, char *base)
{
	size_t			base_nbr;
	unsigned int	i;

	base_nbr = ft_strlen(base);
	i = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		nbr /= base_nbr;
		i++;
	}
	return (i);
}

void				format_hexa(t_flags *flags, char *base)
{
	unsigned int		arg_hexa;
	unsigned int		len;

	arg_hexa = va_arg(flags->ap, unsigned int);
	len = nbrlen(arg_hexa, base);
	if (flags->flag_width)
		flag_width(flags, len);
	if (flags->flag_zero)
		flag_zero(flags, len);
	if (flags->flag_precision)
		flag_precision(flags, len);
	int_printer(flags, arg_hexa, base);
	if (flags->flag_minus)
		flag_minus(flags, flags->len);
}
