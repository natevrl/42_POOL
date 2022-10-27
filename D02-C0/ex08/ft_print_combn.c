/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 13:37:01 by nbenhado          #+#    #+#             */
/*   Updated: 2021/06/30 15:14:01 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}


void init(int n)
{
	char tab[n];
	int l = 0;
	while(l < n){
		tab[l] = l;
		ft_putchar(tab[l]+48);
		l++;
	}
}

// i = n, tab[i] = tab[i]++ jusqua 9, 

//void print_combn(int n)
//{
//	char tab2[n];
//	init(n, tab2);
//	ft_putchar(tab2[0]);
//}

int main()
{
	init(8);
	return 0;
}
