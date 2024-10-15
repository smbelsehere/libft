/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navera-m <navera-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 12:11:46 by navera-m          #+#    #+#             */
/*   Updated: 2024/09/18 14:03:17 by navera-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t i;
	unsigned char *o;

	i = 0;
	o = (unsigned char *) s;
	while (i < n)
	{
		o[i] = c;
		i++;
	}
	return (s);
}

/* int	main(void)
{
	char *str;

	str = malloc(20);
	ft_memset(str, '*', 10);
	ft_memset(&str[3], '+', 2); 
	printf("%s\n", str);
	ft_memset(&str[7], '-', 5);
	printf("%s\n", str);
	free(str);
	return(0);
} */