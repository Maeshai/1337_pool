/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-ghan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 18:40:43 by cel-ghan          #+#    #+#             */
/*   Updated: 2023/08/19 19:52:57 by cel-ghan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;


	i = 0;
	if(str[i] == 0)
	{
		return (1);
	}
	while(str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	main()
{
	char str[] = "";

	printf("%d\n", ft_str_is_lowercase(str));
}
