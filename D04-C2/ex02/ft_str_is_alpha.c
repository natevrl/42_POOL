/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 12:02:50 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/05 10:32:11 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char	*str)
{		
	char	alph;
	char	alph_maj;

	alph = 'a';
	alph_maj = 'A';
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		while (alph <= 'z' || alph_maj <= 'Z')
		{
			if ((*str >= 97 && *str <= 123) || (*str >= 65 && *str <= 90))
				break ;
			else
				return (0);
			alph++;
			alph_maj++;
		}
		str++;
	}	
	return (1);
}
