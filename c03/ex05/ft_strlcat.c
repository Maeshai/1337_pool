/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-ghan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:10:45 by cel-ghan          #+#    #+#             */
/*   Updated: 2023/08/26 17:11:54 by cel-ghan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	lensrc;
	unsigned int	lendest;

	lendest = ft_strlen(dest);
	lensrc = ft_strlen(src);
	i = lendest;
	j = 0;
	if (size == 0 || size <= lendest)
	{
		return (lensrc + size);
	}
	while ((j < size - lendest - 1) && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (lendest + lensrc);
}
