/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-ghan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:44:31 by cel-ghan          #+#    #+#             */
/*   Updated: 2023/08/19 14:29:16 by cel-ghan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	i = 0;
	while ((dest[i] != '\0' && src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;

	}
	dest[i] != '\0';
	return dest;
}

int main()
{
	char dest[] = "aman";
	char src[] = "iak";

	printf("%s\n", ft_strncpy(dest, src, 2));
}
