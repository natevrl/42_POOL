/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 20:51:32 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/03 20:00:41 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap2(int *a, int *b)
{
	int	c;

	c = *b;
	*b = *a;
	*a = c;
}

void	ft_sort_int_tab(int	*tab, int	size)
{
	int	a;
	int	b;

	a = 0;
	while (a < size)
	{
		b = 0;
		while (b < size)
		{
			if (tab[a] < tab[b])
				ft_swap2(&tab[a], &tab[b]);
			b++;
		}
		a++;
	}		
}
