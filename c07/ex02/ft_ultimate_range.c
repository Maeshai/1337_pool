/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-ghan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:55:23 by cel-ghan          #+#    #+#             */
/*   Updated: 2023/09/04 14:14:34 by cel-ghan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		*range = NULL;
		return 0;
	}
	int size = max - min;
	*range = (int *)malloc(size * sizeof(int));

	if(*range == NULL)
	{
		return -1;
	}
	int	i;
	i = 0;
	while(i < size )
	{
		(*range)[i] = min + i;
		i++;
	}
	return size;
}
int main ()
{
	int *range;
	int min = 20;
	int max = 30;
	int size = ft_ultimate_range(&range, min, max);

	int i;
	i = 0;
	while(i < size)
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\n");
		free(range);
}
