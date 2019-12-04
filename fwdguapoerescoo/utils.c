/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvega-tr <fvega-tr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 17:51:25 by fvega-tr          #+#    #+#             */
/*   Updated: 2019/12/01 18:39:10 by fvega-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static	int	ft_size(unsigned int un)
{
	unsigned int size;

	size = 1;
	while (un > 9)
	{
		un /= 10;
		size++;
	}
	return (size);
}

char		*ft_itoa(int n)
{
	char			*str;
	unsigned int	un;
	unsigned int	i;
	unsigned int	size;

	if (n < 0)
		un = (unsigned int)(n * -1);
	else
		un = (unsigned int)n;
	size = ft_size(un);
	if (!(str = (char*)malloc(sizeof(char) * (size + 1 + (n < 0 ? 1 : 0)))))
		return (NULL);
	i = 0;
	if (n < 0 && (str[i] = '-'))
		size++;
	i = size - 1;
	while (un >= 10)
	{
		str[i--] = (char)(un % 10 + '0');
		un /= 10;
	}
	str[i] = (char)(un % 10 + '0');
	str[size] = 0;
	return (str);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char*)s);
}

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}

int	ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

void	ft_putstr_fd(char *s, int fd)
{
	int i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
		{
			write(fd, &s[i], 1);
			i++;
		}
	}
}
