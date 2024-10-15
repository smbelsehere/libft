/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navera-m <navera-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:21:44 by navera-m          #+#    #+#             */
/*   Updated: 2024/10/09 17:04:58 by navera-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char *p;
	int			i;
	
	i = 0;
	p = malloc ((nmemb * size) + 1);
	while (i < ((nmemb * size) + 1))
	{
		p[i] = 0;
		i++;
	}
	return (p);
}

int main (void)
{
	char	d[]= "hereitgoes";
	char	*x;

		
	x= ft_calloc(ft_strlen(d), sizeof(char));
	printf("%s\n",calloc(x, sizeof(char)));
	printf("%s\n",x);
	return (0);
}