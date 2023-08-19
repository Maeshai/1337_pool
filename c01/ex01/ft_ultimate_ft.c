<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-ghan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 20:53:24 by cel-ghan          #+#    #+#             */
/*   Updated: 2023/08/19 15:22:29 by cel-ghan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
=======
#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main()
{
	int	*********nbr;
	int	********nbr1;
	int	*******nbr2;
	int	******nbr3;
	int	*****nbr4;
	int	****nbr5;
	int	***nbr6;
	int	**nbr7;
	int	*nbr8;

	int number;
	
	nbr = &nbr1;
	nbr1 = &nbr2;
	nbr2 = &nbr3;
	nbr3 = &nbr4;
	nbr4 = &nbr5;
	nbr5 = &nbr6;
	nbr6 = &nbr7;
	nbr7 = &nbr8;
	nbr8 = &number;

	ft_ultimate_ft(nbr);
	printf("%d", number);
}
>>>>>>> 2f20a6f3986a0b881bf9c8de53b62ef54297b9c2
