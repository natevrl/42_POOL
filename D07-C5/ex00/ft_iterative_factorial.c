/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 10:36:52 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/08 13:06:31 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int	nb)
{
	int	i;
	int	sauvegarde;

	sauvegarde = 1;
	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	while (i <= nb)
	{
		sauvegarde *= i;
		i++;
	}
	return (sauvegarde);
}
