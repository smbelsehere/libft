/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navera-m <navera-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:32:25 by navera-m          #+#    #+#             */
/*   Updated: 2024/09/30 15:42:32 by navera-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;
	
	p = (char *)s;

	while (*p != '\0')
	{
		if (*p == c)
			return (p);
		p++;
	}
	if (*p == '\0')
		return (p);
	return(p);
}
int	main(void)
{
	const char	s1[6] = "Malaga";
	char	ch = 'a';
	char	*result;

	result = ft_strchr(s1, ch);
	printf("Ultima aparacion de %c en %s esta en posicion esta en posicion %ld\n", ch, result, result - s1);
	return (0);
}