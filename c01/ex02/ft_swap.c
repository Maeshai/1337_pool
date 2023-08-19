<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-ghan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 21:39:28 by cel-ghan          #+#    #+#             */
/*   Updated: 2023/08/19 15:29:41 by cel-ghan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
=======
#include <stdio.h>

void ft_swap(int *a, int *b){

	    int temp;
	        temp = *a;
			*a = *b;
				*b = temp;
}
int main(){

	    int x = 10;
	        int y = 20;

		    ft_swap(&x, &y);
		        printf("After swapping the value of a is : %d, the value of b is : %d\n", x, y);
			    return 0; 
>>>>>>> 2f20a6f3986a0b881bf9c8de53b62ef54297b9c2
}
