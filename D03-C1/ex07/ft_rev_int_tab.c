/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 18:20:55 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/03 20:01:05 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap3(int *a, int *b)
{
	int	c;

	c = *b;
	*b = *a;
	*a = c;
}

void	ft_rev_int_tab(int	*tab, int	size)
{
	int	a;

	a = 0;
	while (size != a + 1 && size != a)
	{
		ft_swap3(&tab[a], &tab[size - 1]);
		size--;
		a++;
	}
}
