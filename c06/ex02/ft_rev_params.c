/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-ghan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 17:38:49 by cel-ghan          #+#    #+#             */
/*   Updated: 2023/09/02 17:40:35 by cel-ghan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	len;

	i = argc - 1;
	while (i > 0)
	{
		len = strlen(argv[i]);
		write (1, argv[i], len);
		write (1, "\n", 1);
		i--;
	}
	return (0);
}
