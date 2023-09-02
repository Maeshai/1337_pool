/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-ghan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 17:41:26 by cel-ghan          #+#    #+#             */
/*   Updated: 2023/09/02 20:56:46 by cel-ghan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_swap(char **a, char **b)
{
	char *temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int ft_cmp(char *s1, char *s2)
{
	return (s1[0] - s2[0]);
}

int main	(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac -1)
	{
		if (ft_cmp(av[i], av[i + 1])> 0)
		{
			ft_swap(&av[i] , &av[i + 1]);
			i = 0;
		}
		i++;
	}

	i = 1;
	while(av[i])
	{
		ft_putstr(av[i]);
		i++;
	}
	return 0;
}
