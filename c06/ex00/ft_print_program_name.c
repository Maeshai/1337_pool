/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-ghan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 17:01:43 by cel-ghan          #+#    #+#             */
/*   Updated: 2023/09/02 17:07:51 by cel-ghan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h> 

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	while (argv[0][i] && argc)
	{
		write (1, &argv[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
}
