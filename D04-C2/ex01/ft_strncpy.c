/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 13:47:11 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/05 20:29:04 by nbenhado         ###   ########.fr       */
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

char	*ft_strncpy(char	*dest, char	*src, unsigned int	n)
{	
	unsigned int	i;
	unsigned int	lenchain;

	lenchain = ft_strlen(src);
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		if (i >= lenchain)
			dest[i] = '\0';
		i++;
	}
	return (dest);
}
