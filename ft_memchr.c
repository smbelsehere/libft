/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navera-m <navera-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:39:36 by navera-m          #+#    #+#             */
/*   Updated: 2024/10/10 16:08:43 by navera-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;
	int			i;
	
	s1 = (unsigned char *)s;
	i = 0;
	while (i < n && s1[i] != c && s1[i] != '\0')
		i++;
	if (s1[i] == c)
		return (&s1[i]);
	return (NULL);
}
/*int main (void)
{
	char	s[]= "naomi";
	unsigned char	*x;
	char	c= '0';

	x = ft_memchr(s, c, 5);
	printf("%s\n",x);
	x = memchr(s, c, 5);
	printf("%s\n",x);
	return (0);
}*/