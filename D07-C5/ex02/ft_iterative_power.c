/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 10:38:11 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/08 13:16:40 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int	nb, int	power)
{
	int	i;
	int	stack;

	i = 1;
	stack = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (i < power)
	{
		nb *= stack;
		i++;
	}
	return (nb);
}
