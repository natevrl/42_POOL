/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 14:09:51 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/08 18:02:41 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int	nb)
{
	int	i;

	i = 2;
	if (nb <= 2)
		return (2);
	while (i <= nb / i)
	{
		if (nb % i == 0)
		{
			i = 1;
			nb++;
		}
		else if (i == nb - 1)
			break ;
		i++;
	}
	return (nb);
}
