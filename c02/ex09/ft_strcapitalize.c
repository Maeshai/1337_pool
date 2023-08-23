/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-ghan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+:s#+   +#+         */
/*   Created: 2023/08/22 09:10:46 by cel-ghan          #+#    #+#             */
/*   Updated: 2023/08/22 14:30:42 by cel-ghan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowecase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowecase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
	{
	str[0] -= 32;
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 32 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64)
			|| (str[i] >= 91 && str[i] <= 96)
			|| (str[i] >= 123 && str[i] <= 126))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] -= 32;
			}
		}
		i++;
	}
	return (str);
}
