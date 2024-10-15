/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navera-m <navera-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:01:01 by navera-m          #+#    #+#             */
/*   Updated: 2024/09/18 14:08:24 by navera-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t i;
	unsigned char *l;

	i = 0;
	l = (unsigned char *) s;
	while (i < n)
	{
		l[i] = '\0';
		i++;
	}
}

int	main()
{
	char *str;

	str = malloc(20);
	ft_memset(str, '*', 10);
	printf("%s\n", str);
	ft_bzero(&str[8], 2); 
	printf("%s\n", str);
	free(str);
	return(0);
}