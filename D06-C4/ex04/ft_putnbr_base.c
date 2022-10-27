/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 12:43:22 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/06 22:25:34 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr( long int nb, long int taille, char *base)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > taille - 1)
	{
		ft_putnbr(nb / taille, taille, base);
		ft_putnbr(nb %= taille, taille, base);
	}
	else
	{
		ft_putchar(base[nb]);
	}
}

int	ft_strlen(char	*str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

void	ft_putnbr_base(int	nbr, char	*base)
{
	int	taille_base;
	int	i;
	int	j;

	i = 0;
	taille_base = ft_strlen(base);
	while (base[i])
	{
		if ((base[i] == '-' || base[i] == '+')
			|| ((base[i] >= 9 && base[i] <= 13) || (base[i] == 32)))
			return ;
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return ;
			j++;
		}
		i++;
	}
	if (base[0] == '\0' || ft_strlen(base) == 1)
		return ;
	ft_putnbr(nbr, taille_base, base);
}


int		main(void)
{
	write(1, "42:", 3);
	ft_putnbr_base(-21443648, "01223456789");
	write(1, "\n2a:", 4);
	ft_putnbr_base(10, "poneyvif");
	write(1, "\n-2a:", 5);
	ft_putnbr_base(-2147483648, "01");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "0");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "+-0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "\t0123456789abcdef");
}

//char *base = "abcdefghij":
//int nb = 10;

//"ba"

//strlen(base) = tailleBase;
//putchar(base[10 % tailleBase]);
//	'a'

//	nb / tailleBase;
//	putchar(base[1 % tailleBase])
//		'b'

