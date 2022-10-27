/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 22:30:50 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/05 20:31:19 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char	*str)
{
	const char	hexa[16] = "0123456789abcdef";
	int			index;

	index = 0;
	while (*str)
	{
		if ((*str < 32) || (*str == 127))
		{
			ft_putchar('\\');
			ft_putchar(hexa[(unsigned char)*str / 16]);
			ft_putchar(hexa[(unsigned char)*str % 16]);
		}
		else
			ft_putchar(*str);
		str++;
	}
}
