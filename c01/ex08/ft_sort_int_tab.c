/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-ghan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 11:27:32 by cel-ghan          #+#    #+#             */
/*   Updated: 2023/08/19 15:10:20 by cel-ghan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	while(size >= 0)
	{
		i = 0;
	while(i < size - 1)
	{
		if(tab[i] > tab[i + 1])
		{
			
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
		}
		i++;
	}
	size--;
	}
}

int	main()
{
	int tab[6] = {8, 9, 6, 5 , 3, 2};
	int	size = 6;

	ft_sort_int_tab(tab, size);
	printf("Sort: %d, %d,%d, %d, %d, %d", tab[0] , tab[1], tab[2], tab[3], tab[4], tab[5]);
}
