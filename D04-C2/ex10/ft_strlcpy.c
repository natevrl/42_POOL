/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 18:21:30 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/05 20:12:53 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

unsigned int	ft_strlcpy(char	*dest, char	*src, unsigned int	size)
{
	unsigned int	i;
	unsigned int	lenchain;

	i = 0;
	lenchain = ft_strlen(src);
	if (size == 0)
		return (lenchain);
	while (i < size - 1)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (lenchain);
}
