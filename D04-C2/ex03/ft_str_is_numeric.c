/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 13:54:43 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/05 11:34:42 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char	*str)
{
	char	numb;

	numb = 48;
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		while (numb <= 57)
		{
			if (*str >= 48 && *str <= 57)
				break ;
			else
				return (0);
			numb++;
		}
		str++;
	}
	return (1);
}
