/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 14:07:35 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/05 10:38:59 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	char	alph;

	alph = 'a';
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		while (alph <= 'z')
		{
			if (*str >= 97 && *str <= 123)
				break ;
			else
				return (0);
			alph++;
		}
		str++;
	}
	return (1);
}
