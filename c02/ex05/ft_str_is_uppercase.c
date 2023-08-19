/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-ghan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:54:01 by cel-ghan          #+#    #+#             */
/*   Updated: 2023/08/19 20:03:58 by cel-ghan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;

	if(str[i] == 0)
	{
		return (1);
	}
	while(str[i] != '\0')
	{
		if(str[i] <= 'Z' && str[i] >= 'A')
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	main()
{
	char str[] = "KHKJHIO";

	printf("%d\n", ft_str_is_uppercase(str));
}
