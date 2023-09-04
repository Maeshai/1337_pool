/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-ghan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:43:58 by cel-ghan          #+#    #+#             */
/*   Updated: 2023/09/04 11:54:39 by cel-ghan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		return 0;
	}
	int result = max - min;
	int *dest = (int *)malloc(result * sizeof(int));

	while(i < result)
	{
		dest[i] = min + i;
		i++;
	}
	return dest;
}
int main()
{
	int min = 10;
	int max = 20;
	int *result = ft_range(min, max);

	int i ;
	i  = 0;
	while(i< max - min)
	{
		printf("%d ", result[i]);
		i++;
	}
	printf("\n");
	free(result);
	return 0;
}
