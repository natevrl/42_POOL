/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 17:26:27 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/05 20:22:27 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char	*str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if ((str[0] >= 97 && str[0] <= 122))
			str[0] -= 32;
		if ((((str[i] >= 32 && str[i] <= 47) || (str[i] > 90 && str[i] < 97)
					|| (str[i] > 57 && str[i] < 65)
					|| (str[i] > 122 && str[i] < 127))
				&& (str[i + 1] >= 97 && str[i + 1] <= 122)))
			str[i + 1] -= 32;
		i++;
	}
	return (str);
}
