/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 10:38:45 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/08 13:18:22 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int	nb, int	power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
