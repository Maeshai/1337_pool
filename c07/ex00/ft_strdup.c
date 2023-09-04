/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-ghan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:11:24 by cel-ghan          #+#    #+#             */
/*   Updated: 2023/09/04 14:11:34 by cel-ghan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
    int len = 0;
    while (str[len])
    {
        len++;
    }
    return len;
}

char *ft_strdup(char *src)
{
    int len = ft_strlen(src);
    char *dest = (char *)malloc((len + 1) * sizeof(char));
    if (dest == NULL)
    {
        return NULL;
    }
    int i = 0;
    while (i < len)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

int main()
{
    char src[] = "Hello, world!";
    char *copy = ft_strdup(src);
    if (copy == NULL)
    {
        printf("MEMORY ALLOCATION FAILED.\n");
        return 1;
    }
    printf("Copied string: %s\n", copy);
    free(copy);
    return 0;
}

