/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-ghan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:53:57 by cel-ghan          #+#    #+#             */
/*   Updated: 2023/09/06 16:11:46 by cel-ghan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int					i;
	unsigned int		strs_len;
	char				*tmp;
	char				*result;

	if (size == 0)
	{
		result = ((char *)malloc(0));
		result[0] = 0;
		return (result);
	}
	strs_len = 0;
	i = 0;
	while (i < size)
		strs_len += ft_strlen(strs[i++]);
	result = (char *)malloc(strs_len + (size - 1) * ft_strlen(sep));
	tmp = ft_strcat(result, strs[0]);
	i = 1;
	while (i < size)
	{
		tmp = ft_strcat(tmp, sep);
		tmp = ft_strcat(tmp, strs[i++]);
	}
	return (result);
}
