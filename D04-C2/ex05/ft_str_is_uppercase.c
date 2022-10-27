/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 14:10:35 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/05 10:42:21 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char	*str)
{
	char	alph_maj;

	alph_maj = 'A';
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		while (alph_maj <= 'Z')
		{
			if (*str >= 65 && *str <= 90)
				break ;
			else
				return (0);
			alph_maj++;
		}
		str++;
	}
	return (1);
}
