/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-ghan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:38:37 by cel-ghan          #+#    #+#             */
/*   Updated: 2023/08/19 13:42:34 by cel-ghan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;

	}
	dest[i] != '\0';
	return dest;
}

int	main()
{
	char	dest[] = "Chaim";
	char	src[] = "cc";

	printf("%s\n", ft_strcpy(dest, src));
}
