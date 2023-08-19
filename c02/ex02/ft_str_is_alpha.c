/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-ghan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 17:17:16 by cel-ghan          #+#    #+#             */
/*   Updated: 2023/08/19 18:23:56 by cel-ghan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if(str[i] == 0)
	{
		return (1);
	}
	while(str[i] != '\0')
	{
	   if((str[i] >= 'a' && str[i] <= 'z' ) || (str[i] >= 'A' && str[i] <= 'Z'))
	{
		i++;
		return (1);
	}
	else
	{
		return (0);
	}
	}
}

int main()
{
	char	str[] = "";

	printf("%d\n", ft_str_is_alpha(str));
}
