/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 09:40:15 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/06 22:19:56 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_atoi(char	*str)
{
	int	result;
	int	i;
	int	convert_negativ;
	int	compteur_negatif;

	i = 0;
	result = 0;
	convert_negativ = 1;
	compteur_negatif = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	while ((str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			compteur_negatif++;
		i++;
	}
	if (compteur_negatif % 2 == 1)
		convert_negativ = -1;
	while (str[i])
	{
		if ((str[i] >= '0' && str[i] <= '9'))
			result = result * 10 + str[i] - '0';
		else
			break ;
		i++;
	}
	if (result)
		return (convert_negativ * result);
	else
		return (0);
}




int	main(void)
{
	printf("42:%d, atoi; %d\n", ft_atoi("  4wd2"), atoi("  4wd2"));
	printf("-42:%d, atoi ; %d\n", ft_atoi(" --+---+--42sfs:f545"), atoi(" --+---+--42sfs:f545"));
	printf(":%d, atoi; %d\n", ft_atoi(" "), atoi(" "));
	printf("0:%d\n", ft_atoi("-0"));
	printf("0:%d, atoi; %d\n", ft_atoi(" - 1 3 2 5 6 3 2 1 6 7"), atoi(" - 1 2 3 4"));
	printf("123456:%d, atoi : %d\n", ft_atoi("123456"), atoi("123456"));
	printf("123:%d, atoi : %d\n", ft_atoi("123ab456"), atoi("123ab456"));
	printf("-100:%d, atoi : %d\n", ft_atoi("-100"), atoi("-100"));
	printf("min:%d\n", ft_atoi("\t---+2147483648"));
	printf("max:%d\n", ft_atoi("\v2147483647"));
}
