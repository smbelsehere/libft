/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navera-m <navera-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:55:41 by navera-m          #+#    #+#             */
/*   Updated: 2024/10/15 13:28:23 by navera-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s1;
	
	s1 = malloc(ft_strlen(s) + 1);
	s1 = ft_memmove(s1, s, ft_strlen(s) + 1);
	return (s1);
}

/*int main (void)
{
	char	s[]= "cadena";
	char	*v;

	v = ft_strdup(s);
	printf("%s\n",v);
	return (0);
}*/