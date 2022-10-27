/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 13:31:08 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/08 20:35:23 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int	nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i < nb)
	{
		if (i * i == nb)
			return (i);
		if (i > 46341)
			return (0);
		i++;
	}
	return (0);
}


#include <stdio.h>

int ft_sqrt(int nb);

int	main(void)
{
	printf("0:%d\n", ft_sqrt(0));
	printf("1:%d\n", ft_sqrt(1));
	printf("0:%d\n", ft_sqrt(37));
	printf("100:%d\n", ft_sqrt(10000));
	printf("0:%d\n", ft_sqrt(10001));
	printf("2000:%d\n", ft_sqrt(4000000));
	printf("0:%d\n", ft_sqrt(-36));
}
