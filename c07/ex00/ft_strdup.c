/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-ghan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:11:24 by cel-ghan          #+#    #+#             */
/*   Updated: 2023/09/06 15:45:55 by cel-ghan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len ;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	int		len ;
	char	*dest;
	int		i;

	i = 0;
	len = ft_strlen(src);
	*dest = (char *)malloc((len + 1) * sizeof(char));
	if (dest == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
