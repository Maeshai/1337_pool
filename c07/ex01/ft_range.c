/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-ghan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:43:58 by cel-ghan          #+#    #+#             */
/*   Updated: 2023/09/06 14:44:25 by cel-ghan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_range(int min, int max)
{
	int	i;
	int	result;
	int	*dest;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	result = max - min;
	*dest = (int *)malloc(result * sizeof(int));
	while (i < result)
	{
		dest[i] = min + i;
		i++;
	}
	return (dest);
}
